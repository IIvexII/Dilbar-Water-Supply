#include "addcustomer.h"
#include "ui_addcustomer.h"

addCustomer::addCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addCustomer)
{
    ui->setupUi(this);
}

addCustomer::~addCustomer()
{
    delete ui;
}


void addCustomer::on_addbtn_clicked()
{
        // Connection to database
        QSqlDatabase sqlitedb;
        QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
        sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
        sqlitedb.setDatabaseName(databasePath);
        sqlitedb.open();

        if(sqlitedb.isOpen()){
            // Assigning values in lineEdit to string variables.
            QString name = ui->nameField->text();
            QString address = ui->addressField->text();
            QString compeny = ui->compenyField->text();
            QString price = ui->priceField->text();
            QString usage = ui->usageField->text();

            // Making Query
            QSqlQuery qry;

            qry.prepare("INSERT INTO customers (name, address, compeny, price, deliver, total_amount, usage_days)"
                        "VALUES (:name, :address, :compeny, :price, 0, 0, :usage)");

            qry.bindValue(":name", name);
            qry.bindValue(":address", address);
            qry.bindValue(":compeny", compeny);
            qry.bindValue(":price", price);
            qry.bindValue(":usage", usage);

            // Trying to execute query.
            if(qry.exec()){
                QMessageBox::information(this,"Sucess", "New Customer is added.");
            }
            else{
                QMessageBox::warning(this, "Faild", "Faild to add new customer.");
            }
        }
        else{
            QMessageBox::warning(this, "Error", "Faild to connect to database");
        }

        sqlitedb.close();
}
