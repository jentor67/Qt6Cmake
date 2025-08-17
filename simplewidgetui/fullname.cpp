#include "fullname.h"
#include "ui_fullname.h"

fullname::fullname(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::fullname)
{}

fullname::~fullname()
{
    delete ui;
}


// #include "secondwindow.h"
// #include "ui_secondwindow.h"

// SecondWindow::SecondWindow(QWidget *parent)
//     : QWidget(parent), ui(new Ui::SecondWindow)
// {
//     ui->setupUi(this);
// }

// SecondWindow::~SecondWindow()
// {
//     delete ui;
// }
