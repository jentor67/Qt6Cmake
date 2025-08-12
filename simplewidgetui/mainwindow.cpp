#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "johnbutton.h"

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

    // the right side
    // 1. Create a QWidget to put into v1layout
    QWidget *rightWidget = new QWidget(this);

    // 2. Create your desired layout into leftWidget
    auto outer = new QVBoxLayout(rightWidget);

    auto noteLabel = new QLabel("Note:");
    outer->addWidget(noteLabel);
    //ui->vlayout->addWidget(noteLabel);

    auto noteEdit = new QTextEdit;
    outer->addWidget(noteEdit);

    // place widget rightWidget into ui->v1layout
    ui->v1layout->addWidget(rightWidget);



    // the left side
    // create a QWidget to act put into v2layout
    QWidget *leftWidget = new QWidget(this);
    //color the leftWidget
    leftWidget->setStyleSheet("border: 2px solid red; background-color: lightblue;");

    // place widget leftWidget into v2layout
    ui->v2layout->addWidget(leftWidget);

    // create QVBoxLayout outerLeft and make the parent leftWidget
    auto outerLeft = new QVBoxLayout(leftWidget);

    // add clearButton to outerLeft
    auto clearButton = new QPushButton("Clear"); //create button
    clearButton->setFixedSize(100, 50);
    clearButton->setStyleSheet("border: 2px solid blue; background-color: red;");
    outerLeft->addWidget(clearButton);  // add to outerLeft layout


    // add saveButton to outerLeft
    auto saveButton = new QPushButton("Save"); // create button
    saveButton->setFixedSize(50,100);
    //outerLeft->addWidget(saveButton); // add to outerLeft layout

    johnbutton creator;


    QPushButton* myButton1 = creator.createButton("John B1", leftWidget);
    outerLeft->addWidget(myButton1);

    QPushButton* myButton2 = creator.createButton("John B2", leftWidget);
    outerLeft->addWidget(myButton2);




    ui->v2layout->addWidget(saveButton);



    //outerLeft->setContentsMargins(0, 0, 0, 0);




}

MainWindow::~MainWindow()
{
    delete ui;
}
