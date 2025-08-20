#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "secdialog.h"
#include "thirdwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::activateSecondWindowclicked);
    connect(ui->pushButtonThirdWindow_2, &QPushButton::clicked, this, &MainWindow::activateThirdWindowclicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::activateSecondWindowclicked()
{
    SecDialog secDeialog;
    secDeialog.setModal(true);
    secDeialog.exec();
}

void MainWindow::activateThirdWindowclicked()
{
    ThirdWindow secDeialog;
    secDeialog.setModal(true);
    secDeialog.exec();
}
