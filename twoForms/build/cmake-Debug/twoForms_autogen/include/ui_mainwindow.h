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
#include <QtWidgets/QLabel>
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
    QLabel *lblPic;
    QLabel *lblJSON;
    QLabel *lblTextFile;
    QMenuBar *menubar;
    QMenu *menuExit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(630, 584);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
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
        lblOpenFile->setGeometry(QRect(100, 70, 124, 34));
        QFont font1;
        font1.setPointSize(11);
        lblOpenFile->setFont(font1);
        btnPickTextFile = new QPushButton(centralwidget);
        btnPickTextFile->setObjectName("btnPickTextFile");
        btnPickTextFile->setGeometry(QRect(230, 70, 123, 34));
        btnPickTextFile->setFont(font1);
        txtTextFile = new QLineEdit(centralwidget);
        txtTextFile->setObjectName("txtTextFile");
        txtTextFile->setGeometry(QRect(50, 110, 511, 28));
        txtTextFileBody = new QTextEdit(centralwidget);
        txtTextFileBody->setObjectName("txtTextFileBody");
        txtTextFileBody->setGeometry(QRect(50, 150, 511, 141));
        txtJSONBody = new QTextEdit(centralwidget);
        txtJSONBody->setObjectName("txtJSONBody");
        txtJSONBody->setGeometry(QRect(50, 379, 511, 141));
        lblOpenJSONFile = new QLabel(centralwidget);
        lblOpenJSONFile->setObjectName("lblOpenJSONFile");
        lblOpenJSONFile->setGeometry(QRect(100, 300, 124, 34));
        lblOpenJSONFile->setFont(font1);
        txtJSONPath = new QLineEdit(centralwidget);
        txtJSONPath->setObjectName("txtJSONPath");
        txtJSONPath->setGeometry(QRect(50, 339, 511, 28));
        btnPickJSONFile = new QPushButton(centralwidget);
        btnPickJSONFile->setObjectName("btnPickJSONFile");
        btnPickJSONFile->setGeometry(QRect(230, 300, 123, 34));
        btnPickJSONFile->setFont(font1);
        lblPic = new QLabel(centralwidget);
        lblPic->setObjectName("lblPic");
        lblPic->setGeometry(QRect(10, 0, 51, 51));
        lblPic->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Warehouse.png")));
        lblPic->setScaledContents(true);
        lblJSON = new QLabel(centralwidget);
        lblJSON->setObjectName("lblJSON");
        lblJSON->setGeometry(QRect(50, 300, 31, 31));
        lblJSON->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/jsonfile.jpeg")));
        lblJSON->setScaledContents(true);
        lblTextFile = new QLabel(centralwidget);
        lblTextFile->setObjectName("lblTextFile");
        lblTextFile->setGeometry(QRect(50, 70, 31, 31));
        lblTextFile->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/TextFile.png")));
        lblTextFile->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 630, 26));
        menuExit = new QMenu(menubar);
        menuExit->setObjectName("menuExit");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuExit->menuAction());
        menuExit->addSeparator();
        menuExit->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Open Dialog", nullptr));
        lblOpenFile->setText(QCoreApplication::translate("MainWindow", "Open Text File:", nullptr));
        btnPickTextFile->setText(QCoreApplication::translate("MainWindow", "Pick Text File", nullptr));
        lblOpenJSONFile->setText(QCoreApplication::translate("MainWindow", "Open JSON File:", nullptr));
        btnPickJSONFile->setText(QCoreApplication::translate("MainWindow", "Pick JSON File", nullptr));
        lblPic->setText(QString());
        lblJSON->setText(QString());
        lblTextFile->setText(QString());
        menuExit->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
