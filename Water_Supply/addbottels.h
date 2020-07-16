#ifndef ADDBOTTELS_H
#define ADDBOTTELS_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class addBottels;
}

class addBottels : public QDialog
{
    Q_OBJECT

public:
    explicit addBottels(QWidget *parent = nullptr);
    ~addBottels();

private slots:

    void on_pushButton_clicked();

private:
    Ui::addBottels *ui;
};

#endif // ADDBOTTELS_H
