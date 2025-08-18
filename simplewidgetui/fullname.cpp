#include "fullname.h"
#include "./ui_fullname.h"

namespace Ui {
fullname::fullname(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::fullname)
{

    ui->setupUi(this);

}

fullname::~fullname() {
    delete ui;
}
}
