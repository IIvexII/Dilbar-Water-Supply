/********************************************************************************
** Form generated from reading UI file 'deletecustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECUSTOMER_H
#define UI_DELETECUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deleteCustomer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteCustomer)
    {
        if (deleteCustomer->objectName().isEmpty())
            deleteCustomer->setObjectName(QString::fromUtf8("deleteCustomer"));
        deleteCustomer->resize(356, 202);
        verticalLayout = new QVBoxLayout(deleteCustomer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(deleteCustomer);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(deleteCustomer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(deleteCustomer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(deleteCustomer);

        QMetaObject::connectSlotsByName(deleteCustomer);
    } // setupUi

    void retranslateUi(QDialog *deleteCustomer)
    {
        deleteCustomer->setWindowTitle(QCoreApplication::translate("deleteCustomer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteCustomer", "Customer ID", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteCustomer", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteCustomer: public Ui_deleteCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECUSTOMER_H
