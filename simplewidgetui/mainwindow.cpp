#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "QLabel"
#include "QTextEdit"
#include "QPushButton"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 1. Create a QWidget to act as the central container
    QWidget *centralWidget = new QWidget(this);

    // 2. Create your desired layout into centralWidget
    auto outer = new QVBoxLayout(centralWidget);

    auto noteLabel = new QLabel("Note:");
    outer->addWidget(noteLabel);

    auto noteEdit = new QTextEdit;
    outer->addWidget(noteEdit);

    auto inner = new QHBoxLayout;
    outer->addLayout(inner);


    auto clearButton = new QPushButton("Clear");
    inner->addWidget(clearButton);

    auto saveButton = new QPushButton("Save");
    inner->addWidget(saveButton);

    // 4. Set the layout on the central widget
    centralWidget->setLayout(outer);

    // 5. Set the QWidget as the central widget of the QMainWindow
    setCentralWidget(centralWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
