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
