#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent, QString message) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText(message);

    connect(this, &Dialog::finished, this, [this](){
        emit dataAvailable("meow");
    });
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    close();
}

