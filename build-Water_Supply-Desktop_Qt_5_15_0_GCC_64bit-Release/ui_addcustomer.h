/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addCustomer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *nameField;
    QLabel *label_2;
    QLineEdit *addressField;
    QLabel *label_3;
    QLineEdit *compenyField;
    QLabel *label_4;
    QLineEdit *priceField;
    QLabel *label_5;
    QLineEdit *usageField;
    QHBoxLayout *horizontalLayout;
    QPushButton *addbtn;
    QPushButton *closebtn;

    void setupUi(QDialog *addCustomer)
    {
        if (addCustomer->objectName().isEmpty())
            addCustomer->setObjectName(QString::fromUtf8("addCustomer"));
        addCustomer->resize(540, 553);
        verticalLayout = new QVBoxLayout(addCustomer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(addCustomer);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        nameField = new QLineEdit(addCustomer);
        nameField->setObjectName(QString::fromUtf8("nameField"));
        QFont font1;
        font1.setPointSize(20);
        nameField->setFont(font1);

        verticalLayout->addWidget(nameField);

        label_2 = new QLabel(addCustomer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        addressField = new QLineEdit(addCustomer);
        addressField->setObjectName(QString::fromUtf8("addressField"));
        addressField->setFont(font1);

        verticalLayout->addWidget(addressField);

        label_3 = new QLabel(addCustomer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        compenyField = new QLineEdit(addCustomer);
        compenyField->setObjectName(QString::fromUtf8("compenyField"));
        compenyField->setFont(font1);

        verticalLayout->addWidget(compenyField);

        label_4 = new QLabel(addCustomer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        priceField = new QLineEdit(addCustomer);
        priceField->setObjectName(QString::fromUtf8("priceField"));
        priceField->setFont(font1);

        verticalLayout->addWidget(priceField);

        label_5 = new QLabel(addCustomer);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        usageField = new QLineEdit(addCustomer);
        usageField->setObjectName(QString::fromUtf8("usageField"));
        usageField->setFont(font1);

        verticalLayout->addWidget(usageField);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addbtn = new QPushButton(addCustomer);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setFont(font);

        horizontalLayout->addWidget(addbtn);

        closebtn = new QPushButton(addCustomer);
        closebtn->setObjectName(QString::fromUtf8("closebtn"));
        closebtn->setFont(font);

        horizontalLayout->addWidget(closebtn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addCustomer);
        QObject::connect(closebtn, SIGNAL(clicked()), addCustomer, SLOT(close()));

        QMetaObject::connectSlotsByName(addCustomer);
    } // setupUi

    void retranslateUi(QDialog *addCustomer)
    {
        addCustomer->setWindowTitle(QCoreApplication::translate("addCustomer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addCustomer", "Customer Name", nullptr));
        label_2->setText(QCoreApplication::translate("addCustomer", "Address", nullptr));
        label_3->setText(QCoreApplication::translate("addCustomer", "Compeny", nullptr));
        label_4->setText(QCoreApplication::translate("addCustomer", "Price", nullptr));
        label_5->setText(QCoreApplication::translate("addCustomer", "Usage Days", nullptr));
        addbtn->setText(QCoreApplication::translate("addCustomer", "Add", nullptr));
        closebtn->setText(QCoreApplication::translate("addCustomer", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCustomer: public Ui_addCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
