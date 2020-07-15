#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class addCustomer;
}

class addCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit addCustomer(QWidget *parent = nullptr);
    ~addCustomer();

private slots:


    void on_addbtn_clicked();

private:
    Ui::addCustomer *ui;
};

#endif // ADDCUSTOMER_H
