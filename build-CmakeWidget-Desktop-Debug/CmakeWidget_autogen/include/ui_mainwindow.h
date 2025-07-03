/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionNew;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnSubtract;
    QPushButton *btnDivision;
    QPushButton *btnProduct;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txtFirstNumber;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txtSecondNumber;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *txtResult;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(465, 350);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 140, 340, 47));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName("btnAdd");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        btnAdd->setFont(font);

        horizontalLayout->addWidget(btnAdd);

        btnSubtract = new QPushButton(layoutWidget);
        btnSubtract->setObjectName("btnSubtract");
        btnSubtract->setFont(font);

        horizontalLayout->addWidget(btnSubtract);

        btnDivision = new QPushButton(layoutWidget);
        btnDivision->setObjectName("btnDivision");
        btnDivision->setFont(font);

        horizontalLayout->addWidget(btnDivision);

        btnProduct = new QPushButton(layoutWidget);
        btnProduct->setObjectName("btnProduct");
        btnProduct->setFont(font);

        horizontalLayout->addWidget(btnProduct);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 40, 254, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        txtFirstNumber = new QLineEdit(layoutWidget1);
        txtFirstNumber->setObjectName("txtFirstNumber");
        QFont font2;
        font2.setPointSize(12);
        txtFirstNumber->setFont(font2);

        horizontalLayout_2->addWidget(txtFirstNumber);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(60, 80, 276, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        txtSecondNumber = new QLineEdit(layoutWidget2);
        txtSecondNumber->setObjectName("txtSecondNumber");
        txtSecondNumber->setFont(font2);

        horizontalLayout_3->addWidget(txtSecondNumber);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(60, 260, 201, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);

        txtResult = new QLineEdit(layoutWidget3);
        txtResult->setObjectName("txtResult");
        txtResult->setFont(font2);

        horizontalLayout_4->addWidget(txtResult);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 220, 80, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 465, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addAction(actionNew);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSubtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnProduct->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second Number:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sec Dialog", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
