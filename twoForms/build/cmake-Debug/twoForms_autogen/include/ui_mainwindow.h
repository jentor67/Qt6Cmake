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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *lblOpenFile;
    QPushButton *btnPickTextFile;
    QLineEdit *txtTextFile;
    QTextEdit *txtTextFileBody;
    QTextEdit *txtJSONBody;
    QLabel *lblOpenJSONFile;
    QLineEdit *txtJSONPath;
    QPushButton *btnPickJSONFile;
    QLabel *lblPicture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(630, 584);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 201, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 10, 171, 41));
        pushButton->setFont(font);
        lblOpenFile = new QLabel(centralwidget);
        lblOpenFile->setObjectName("lblOpenFile");
        lblOpenFile->setGeometry(QRect(51, 71, 124, 34));
        QFont font1;
        font1.setPointSize(11);
        lblOpenFile->setFont(font1);
        btnPickTextFile = new QPushButton(centralwidget);
        btnPickTextFile->setObjectName("btnPickTextFile");
        btnPickTextFile->setGeometry(QRect(182, 71, 123, 34));
        btnPickTextFile->setFont(font1);
        txtTextFile = new QLineEdit(centralwidget);
        txtTextFile->setObjectName("txtTextFile");
        txtTextFile->setGeometry(QRect(50, 110, 511, 28));
        txtTextFileBody = new QTextEdit(centralwidget);
        txtTextFileBody->setObjectName("txtTextFileBody");
        txtTextFileBody->setGeometry(QRect(50, 150, 511, 141));
        txtJSONBody = new QTextEdit(centralwidget);
        txtJSONBody->setObjectName("txtJSONBody");
        txtJSONBody->setGeometry(QRect(48, 379, 511, 141));
        lblOpenJSONFile = new QLabel(centralwidget);
        lblOpenJSONFile->setObjectName("lblOpenJSONFile");
        lblOpenJSONFile->setGeometry(QRect(49, 300, 124, 34));
        lblOpenJSONFile->setFont(font1);
        txtJSONPath = new QLineEdit(centralwidget);
        txtJSONPath->setObjectName("txtJSONPath");
        txtJSONPath->setGeometry(QRect(48, 339, 511, 28));
        btnPickJSONFile = new QPushButton(centralwidget);
        btnPickJSONFile->setObjectName("btnPickJSONFile");
        btnPickJSONFile->setGeometry(QRect(180, 300, 123, 34));
        btnPickJSONFile->setFont(font1);
        lblPicture = new QLabel(centralwidget);
        lblPicture->setObjectName("lblPicture");
        lblPicture->setGeometry(QRect(10, 30, 54, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 630, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open Dialog", nullptr));
        lblOpenFile->setText(QCoreApplication::translate("MainWindow", "Open Text File:", nullptr));
        btnPickTextFile->setText(QCoreApplication::translate("MainWindow", "Pick Text File", nullptr));
        lblOpenJSONFile->setText(QCoreApplication::translate("MainWindow", "Open JSON File:", nullptr));
        btnPickJSONFile->setText(QCoreApplication::translate("MainWindow", "Pick JSON File", nullptr));
        lblPicture->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
