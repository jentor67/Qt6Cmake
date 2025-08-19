#include "secondwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

SecondWindow::SecondWindow(QWidget *parent)
    : QMainWindow(parent)
{
    auto *central = new QWidget;
    auto *layout = new QVBoxLayout(central);

    auto *btn = new QPushButton("Close Second Window");
    layout->addWidget(btn);

    connect(btn, &QPushButton::clicked, this, &SecondWindow::close);

    setCentralWidget(central);
    setWindowTitle("Second Window");
    resize(300, 200);
}



// #include "secondwindow.h"
// //#include "QApplication"
// #include "QWidget"
// #include "QWindow"
// #include "QDebug"

// SecondWindow::SecondWindow(QWidget *parent) : QWidget(parent) {
//     qDebug() << "Button clicked! before window"; // Example action
//     QWindow window;
//     window.resize(400,300);
//     window.windowTitleChanged("Second window");
//     //window.setWindowTitle("Second Window");

//     auto *layout = new QVBoxLayout(this);
//     auto *btn = new QPushButton("I am in the second window", this);

//     layout->addWidget(btn);
//     //setLayout(layout);
//     window.setLayout(layout);
//     window.
//     window.show();
//     qDebug() << "Button clicked! after window"; // Example action

// }


// #include <QApplication>
// #include <QWidget>

// int main(int argc, char *argv[])
// {
//     QApplication app(argc, argv);

//     QWidget window;
//     window.resize(400, 300);        // Set window size
//     window.setWindowTitle("Qt6 Window from Code");
//     window.show();

//     return app.exec();
// }
