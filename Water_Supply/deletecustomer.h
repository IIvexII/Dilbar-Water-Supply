#ifndef DELETECUSTOMER_H
#define DELETECUSTOMER_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class deleteCustomer;
}

class deleteCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit deleteCustomer(QWidget *parent = nullptr);
    ~deleteCustomer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deleteCustomer *ui;
};

#endif // DELETECUSTOMER_H
