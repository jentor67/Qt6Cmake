#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "johnbutton.h"
//#include "fullname.h"

#include "QLabel"
#include "QTextEdit"
#include "QPushButton"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QWidget"

// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent), ui(new Ui::MainWindow), secondWindow(nullptr)
// {
//     ui->setupUi(this);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::MainWindow), fullname(nullptr)
{
    ui->setupUi(this);
    myNewWindow = nullptr;

    // the right side
    // 1. Create a QWidget to put into v1layout
    QWidget *leftWidget = new QWidget(this);

    // 2. Create your desired layout into leftWidget
    auto outer = new QVBoxLayout(leftWidget);

    auto noteLabel = new QLabel("Note:");
    outer->addWidget(noteLabel);
    //ui->vlayout->addWidget(noteLabel);

    auto noteEdit = new QTextEdit;
    outer->addWidget(noteEdit);

    // place widget rightWidget into ui->v1layout
    ui->v1layout->addWidget(leftWidget);



    QWidget *horWidget = new QWidget(this);
    horWidget->setStyleSheet("border: 4px solid yellow; background-color: black;");
    auto horLayout = new QHBoxLayout(horWidget);

    ui->v2layout->addWidget(horWidget);

    QWidget *redWidget = new QWidget(this);
    redWidget->setStyleSheet("border: 2px solid red; background-color: lightblue;");
    auto redVLayout = new QVBoxLayout(redWidget);
    redVLayout->setAlignment(Qt::AlignTop);

    QWidget *blueWidget = new QWidget(this);
    blueWidget->setStyleSheet("border: 2px solid blue; background-color: #F58B76;");
    auto blueVLayout = new QVBoxLayout(blueWidget);
    blueVLayout->setAlignment(Qt::AlignTop);


    //Add blue and red widgets to horLayout
    horLayout->addWidget(redWidget);
    horLayout->addWidget(blueWidget);


    // create buttons
    johnbutton creator;


    QPushButton* myButton1 = creator.createRedButton("John R1", redWidget);
    // Connect the button's clicked signal to the slot
    //connect(button, &QPushButton::clicked, this, &MainWindow::handleButtonClick); // change the button name
    connect(myButton1, &QPushButton::clicked, this, &MainWindow::handlejohnaction);
    redVLayout->addWidget(myButton1);

    QPushButton* myButton2 = creator.createRedButton("John R2", redWidget);
    redVLayout->addWidget(myButton2);

    QPushButton* myButton3 = creator.createBlueButton("John B1", blueWidget);
    blueVLayout->addWidget(myButton3);

    QPushButton* myButton4 = creator.createBlueButton("John B2", blueWidget);
    blueVLayout->addWidget(myButton4);



}

// fullname f; // Create an instance of your dialog.
// f.show(); // Show the dialog.
// void MainWindow::openSecondWindow()
// {
//     if (!secondWindow)
//         secondWindow = new SecondWindow(this);  // create only once
//     secondWindow->show();
// }



void MainWindow::handlejohnaction()
{
    if (!myNewWindow)  // Create only if not already created
        fullname = new myNewWindow(this);

    myNewWindow.show(); // Show the new window
    myNewWindow.raise(); // Bring it to the front
    myNewWindow.activateWindow(); // Activate it

    qDebug() << "Button clicked! Executing C++ function."; // Example action
}


MainWindow::~MainWindow()
{

    delete ui;
    delete myNewWindow;
}
