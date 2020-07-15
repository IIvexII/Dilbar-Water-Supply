#ifndef ADDBOTTELS_H
#define ADDBOTTELS_H

#include <QDialog>

namespace Ui {
class addBottels;
}

class addBottels : public QDialog
{
    Q_OBJECT

public:
    explicit addBottels(QWidget *parent = nullptr);
    ~addBottels();

private:
    Ui::addBottels *ui;
};

#endif // ADDBOTTELS_H
