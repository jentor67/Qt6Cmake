#include "mainwindow.h"

#include "QLabel"
#include "QTextEdit"
#include "QPushButton"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QWidget"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);

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

    setWindowTitle("My Qt6 Application");
    resize(800, 600);

    // *** Reference to adding Layout to mainwindow need to add a widget first
    // // 1. Create a QWidget to act as the central container
    // QWidget *centralWidget = new QWidget(this);

    // // 2. Create your desired layout
    // QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget); // Or QHBoxLayout, QGridLayout

    // // 3. Add widgets to your layout
    // mainLayout->addWidget(new QPushButton("Button 1"));
    // mainLayout->addWidget(new QPushButton("Button 2"));

    // // 4. Set the layout on the central widget
    // centralWidget->setLayout(mainLayout);

    // // 5. Set the QWidget as the central widget of the QMainWindow
    // setCentralWidget(centralWidget);

    // setWindowTitle("My Qt6 Application");
    // resize(800, 600);
}

//MainWindow::~MainWindow() {}
