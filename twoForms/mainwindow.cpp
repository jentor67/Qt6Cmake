#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog* myDialog = new Dialog(this,"Hello!");
    myDialog->show();

    connect(myDialog, &Dialog::dataAvailable, this, &MainWindow::onDataAvailable);
}


void MainWindow::onDataAvailable(const QString &data)
{
    ui->label->setText(data);

    //this changes the window title
    setWindowTitle(data);
}
