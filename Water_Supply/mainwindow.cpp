#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addcustomer.h"
#include "deletecustomer.h"
#include "addbottels.h"

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
