/********************************************************************************
** Form generated from reading UI file 'addbottels.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOTTELS_H
#define UI_ADDBOTTELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addBottels
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *addBottels)
    {
        if (addBottels->objectName().isEmpty())
            addBottels->setObjectName(QString::fromUtf8("addBottels"));
        addBottels->resize(400, 300);
        verticalLayout = new QVBoxLayout(addBottels);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(addBottels);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(addBottels);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(addBottels);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(addBottels);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setPointSize(24);
        lineEdit->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(addBottels);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(addBottels);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(addBottels);
        QObject::connect(pushButton_2, SIGNAL(clicked()), addBottels, SLOT(close()));

        QMetaObject::connectSlotsByName(addBottels);
    } // setupUi

    void retranslateUi(QDialog *addBottels)
    {
        addBottels->setWindowTitle(QCoreApplication::translate("addBottels", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addBottels", "Current Status    ", nullptr));
        label_2->setText(QCoreApplication::translate("addBottels", "0", nullptr));
        label_3->setText(QCoreApplication::translate("addBottels", "Add Bottels", nullptr));
        pushButton->setText(QCoreApplication::translate("addBottels", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addBottels", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBottels: public Ui_addBottels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOTTELS_H
