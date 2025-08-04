#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>

#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QStyleOptionButton>
#include <QtGui/QPainter>
#include "QProxyStyle"
#include "QSpinBox"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Apply the custom style globally
    //a.setStyle(new MyCustomStyleJohn());


    MainWindow w;



    //a.setStyle(new MyCustomStyle()); // Set the custom style for the application

    w.show();


    return a.exec();
}






