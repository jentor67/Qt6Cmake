/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QLineEdit *txtTextFile;
    QTextEdit *txtTextFileBody;
    QPushButton *btnPickJSONFile;
    QTextEdit *txtJSONBody;
    QLineEdit *txtJSONPath;
    QPushButton *btnPickTextFile;
    QMenuBar *menubar;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtTextFile = new QLineEdit(centralwidget);
        txtTextFile->setObjectName("txtTextFile");
        txtTextFile->setGeometry(QRect(120, 120, 511, 28));
        txtTextFileBody = new QTextEdit(centralwidget);
        txtTextFileBody->setObjectName("txtTextFileBody");
        txtTextFileBody->setGeometry(QRect(120, 160, 511, 141));
        btnPickJSONFile = new QPushButton(centralwidget);
        btnPickJSONFile->setObjectName("btnPickJSONFile");
        btnPickJSONFile->setGeometry(QRect(300, 310, 123, 34));
        QFont font;
        font.setPointSize(11);
        btnPickJSONFile->setFont(font);
        txtJSONBody = new QTextEdit(centralwidget);
        txtJSONBody->setObjectName("txtJSONBody");
        txtJSONBody->setGeometry(QRect(120, 389, 511, 141));
        txtJSONPath = new QLineEdit(centralwidget);
        txtJSONPath->setObjectName("txtJSONPath");
        txtJSONPath->setGeometry(QRect(120, 349, 511, 28));
        btnPickTextFile = new QPushButton(centralwidget);
        btnPickTextFile->setObjectName("btnPickTextFile");
        btnPickTextFile->setGeometry(QRect(300, 80, 123, 34));
        btnPickTextFile->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName("menuExit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuExit->menuAction());
        menuExit->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btnPickJSONFile->setText(QCoreApplication::translate("MainWindow", "Pick JSON File", nullptr));
        btnPickTextFile->setText(QCoreApplication::translate("MainWindow", "Pick Text File", nullptr));
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
