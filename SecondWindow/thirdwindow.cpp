#include "thirdwindow.h"
#include "ui_thirdwindow.h"

ThirdWindow::ThirdWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}
