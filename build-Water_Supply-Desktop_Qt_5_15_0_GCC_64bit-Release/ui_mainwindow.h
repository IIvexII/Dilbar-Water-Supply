/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *logo;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addCustbtn;
    QPushButton *addBottels;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(656, 414);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	qproperty-alignment: AlignCenter;\n"
"}\n"
"QListWidget:item{\n"
"	background: blue;\n"
"	color: white;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Mono"));
        font.setPointSize(26);
        logo->setFont(font);

        verticalLayout->addWidget(logo);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addCustbtn = new QPushButton(centralwidget);
        addCustbtn->setObjectName(QString::fromUtf8("addCustbtn"));

        horizontalLayout->addWidget(addCustbtn);

        addBottels = new QPushButton(centralwidget);
        addBottels->setObjectName(QString::fromUtf8("addBottels"));

        horizontalLayout->addWidget(addBottels);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QCoreApplication::translate("MainWindow", "Ahmad Brothers Water Point", nullptr));
        addCustbtn->setText(QCoreApplication::translate("MainWindow", "Add Customer", nullptr));
        addBottels->setText(QCoreApplication::translate("MainWindow", "Add Bottels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
