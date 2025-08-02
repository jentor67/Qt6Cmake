#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
//#include "MyButton.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStyleFactory>
#include <QtWidgets/QStyleOptionButton>
#include <QtGui/QPainter>
#include "QProxyStyle"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    //a.setStyle(new MyCustomStyle()); // Set the custom style for the application

    w.show();


    return a.exec();
}






