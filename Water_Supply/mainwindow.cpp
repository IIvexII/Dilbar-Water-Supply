#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addcustomer.h"
#include "deletecustomer.h"
#include "addbottels.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addCustbtn_clicked()
{
    addCustomer dialog;
    dialog.setModal(true);
    dialog.exec();

}

void MainWindow::on_pushButton_clicked()
{

    // Connection to database
    QSqlDatabase sqlitedb;
    QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(databasePath);
    sqlitedb.open();

    if(sqlitedb.isOpen()){
        QSqlQuery qry;

        qry.prepare(QString("SELECT total FROM Bottels;"));

        if(!qry.exec()){
            QMessageBox::warning(this, "Error", "Unable to fetch from database.");
        }
        else{
            while(qry.next())
                ui->label_2->setText(qry.value(0).toString());
        }
    }
        QSqlTableModel * tableModel;
        tableModel = new QSqlTableModel;
        tableModel->setTable("customers");
        tableModel->select();

        ui->tableView->setModel(tableModel);

}

void MainWindow::on_pushButton_2_clicked()
{
    deleteCustomer dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_addBottels_clicked()
{
    addBottels dialog;
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_deliveryBtn_clicked()
{
    // Connection to database
    QSqlDatabase sqlitedb;
    QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(databasePath);
    sqlitedb.open();

    if(sqlitedb.isOpen()){
        QSqlQuery qry;
        QString customer_id = 0;

        QString final_total;

        customer_id = ui->lineEdit_4->text();

        qry.prepare("SELECT price, total_amount FROM customers WHERE id = '"+ customer_id +"';");

        if(qry.exec()){
            int recCount = 0;
            while( qry.next() )
            {
                recCount++;
            }
            if(recCount>=1){
                qry.prepare("UPDATE customers SET total_amount = total_amount+price WHERE id = '"+ customer_id +"';");
                qry.exec();

                qry.prepare("UPDATE customers SET deliver = deliver+1 WHERE id = '"+ customer_id +"';");
                qry.exec();

                qry.prepare("UPDATE Bottels SET total =total-1 ;");
                qry.exec();

                qry.prepare("UPDATE customers SET last_delivery = DATE('now') WHERE id ='"+ customer_id +"' ;");
                qry.exec();
            }
        }

    }

    sqlitedb.close();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Reset", "Are you Sure you wanna reset id?",
                                                        QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        // Connection to database
        QSqlDatabase sqlitedb;
        QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
        sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
        sqlitedb.setDatabaseName(databasePath);
        sqlitedb.open();

        if(sqlitedb.isOpen()){
            QSqlQuery qry;
            QString customer_id = 0;

            QString final_total;

            customer_id = ui->lineEdit_4->text();

            qry.prepare("SELECT price, total_amount FROM customers WHERE id = '"+ customer_id +"';");

            if(qry.exec()){
                int recCount = 0;
                while( qry.next() )
                {
                    recCount++;
                }
                if(recCount>=1){
                    qry.prepare("UPDATE customers SET total_amount = 0 WHERE id = '"+ customer_id +"';");
                    qry.exec();

                    qry.prepare("UPDATE customers SET deliver = 0 WHERE id = '"+ customer_id +"';");
                    qry.exec();
                }
            }

        }

        sqlitedb.close();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    // SELECT * FROM customers WHERE julianday('now') - julianday(last_delivery) > usage_days;

    // Connection to database
    QSqlDatabase sqlitedb;
    QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(databasePath);
    sqlitedb.open();

    if(sqlitedb.isOpen()){
            QSqlQueryModel * model = new QSqlQueryModel();
            QSqlQuery qry;

            qry.prepare("SELECT * FROM customers WHERE julianday('now') - julianday(last_delivery) > usage_days;");
            qry.exec();

            model->setQuery(qry);
            ui->tableView->setModel(model);
    }
    sqlitedb.close();
}
