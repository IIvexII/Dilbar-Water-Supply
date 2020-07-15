#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addcustomer.h"

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
