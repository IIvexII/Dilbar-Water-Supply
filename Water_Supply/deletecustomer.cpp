#include "deletecustomer.h"
#include "ui_deletecustomer.h"

deleteCustomer::deleteCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteCustomer)
{
    ui->setupUi(this);
}

deleteCustomer::~deleteCustomer()
{
    delete ui;
}

void deleteCustomer::on_pushButton_clicked()
{
    // Connection to database
    QSqlDatabase sqlitedb;
    QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(databasePath);
    sqlitedb.open();

    if(sqlitedb.isOpen()){

        QString id = ui->lineEdit->text();

        QSqlQuery qry;
        qry.prepare("DELETE FROM customers WHERE ID = :id;");

        qry.bindValue(":id", id);

        qry.exec();

        connect(this, SIGNAL(closeWindow()), this, SLOT(close()));
    }
    else{
        QMessageBox::warning(this, "Error", "Faild to connect to database");
    }

    sqlitedb.close();


}
