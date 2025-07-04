#include "secdialog.h"
#include "ui_secdialog.h"

SecDialog::SecDialog(const QString &data, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    ui->lblMessage->setText(data);
}

SecDialog::~SecDialog()
{
    delete ui;
}
