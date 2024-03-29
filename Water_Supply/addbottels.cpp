#include "addbottels.h"
#include "ui_addbottels.h"

addBottels::addBottels(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBottels)
{
    ui->setupUi(this);
}

addBottels::~addBottels()
{
    delete ui;
}


void addBottels::on_pushButton_clicked()
{
    // Connection to database
    QSqlDatabase sqlitedb;
    QString databasePath = "/home/student/.research/work/Dilbar Water Supply/Water_Supply/database.db";
    sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(databasePath);
    sqlitedb.open();

    if(sqlitedb.isOpen()){
        QSqlQuery qry;
        int amount = 0;
        QString total;
        qry.prepare(QString("SELECT total FROM Bottels;"));

        if(!qry.exec()){
            QMessageBox::warning(this, "Error", "Unable to fetch from database.");
        }
        else{
            while(qry.next())
                amount = qry.value(0).toInt();
        }

        total = QString::number(ui->lineEdit->text().toInt() + amount);
      qry.prepare("UPDATE Bottels SET total = '"+ total + "';");
      qry.exec();
    }

    sqlitedb.close();
}
