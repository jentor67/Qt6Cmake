#include "secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Second Window");

    auto *layout = new QVBoxLayout(this);
    auto *btn = new QPushButton("I am in the second window", this);

    layout->addWidget(btn);
    setLayout(layout);
}
