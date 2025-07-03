#include "warehouse.h"
#include "ui_warehouse.h"
#include "mainwindow.h"

Warehouse::Warehouse(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Warehouse)
{
    ui->setupUi(this);
    //ui->txtWarehouseDescription->setText("John"); //works
    //ui->txtWarehouseName->setText(Ui::MainWindow)
    //inputMaskLineEdit->setText("00000000");
     // Assuming ParentWindow has a public method getValue()
    /*
    QString value = parentWindow->getValue();
    findChild<QLabel*>()->setText("Value from parent: " + value);
    */
    //QString value = MainWindow->getValue():
    ui->txtWarehouseDescription->setText("John"); //works

}

Warehouse::~Warehouse()
{
    delete ui;
}

void Warehouse::on_pushButton_clicked()
{
    MainWindow w;
    w.setWindowTitle("John");
    w.show();
    //this->close();

}

