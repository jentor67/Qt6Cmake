#include "simplewindow.h"
#include "ui_simplewindow.h"

SimpleWindow::SimpleWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SimpleWindow)
{
    ui->setupUi(this);
}

SimpleWindow::~SimpleWindow()
{
    delete ui;
}
