#include "warehouse.h"
#include "ui_warehouse.h"

Warehouse::Warehouse(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Warehouse)
{
    ui->setupUi(this);
}

Warehouse::~Warehouse()
{
    delete ui;
}

void Warehouse::on_pushButton_clicked()
{
    this->close();
}

