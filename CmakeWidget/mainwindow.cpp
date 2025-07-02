#include "mainwindow.h"
#include "./ui_mainwindow.h"


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

int firstNumber, secondNumber, result;

void MainWindow::on_btnAdd_clicked()
{
    firstNumber = ui->txtFirstNumber->text().toInt();
    secondNumber = ui->txtSecondNumber->text().toInt();
    result = firstNumber + secondNumber;

    ui->txtResult->setText(QString::number(result));

    setWindowTitle("Adding Numbers");

}


void MainWindow::on_btnSubtract_clicked()
{
    firstNumber = ui->txtFirstNumber->text().toInt();
    secondNumber = ui->txtSecondNumber->text().toInt();
    result = firstNumber - secondNumber;

    ui->txtResult->setText(QString::number(result));

    setWindowTitle("Subtracting Numbers");
}


void MainWindow::on_btnDivision_clicked()
{
    firstNumber = ui->txtFirstNumber->text().toInt();
    secondNumber = ui->txtSecondNumber->text().toInt();
    result = firstNumber / secondNumber;

    ui->txtResult->setText(QString::number(result));

    setWindowTitle("Dividing Numbers");
}


void MainWindow::on_btnProduct_clicked()
{
    firstNumber = ui->txtFirstNumber->text().toInt();
    secondNumber = ui->txtSecondNumber->text().toInt();
    result = firstNumber * secondNumber;

    ui->txtResult->setText(QString::number(result));

    setWindowTitle("Multiplying Numbers");
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionNew_triggered()
{

    Warehouse twarehouse;
    twarehouse.setModal(true);
    twarehouse.exec();
}

