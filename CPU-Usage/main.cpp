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
#include <QPainter>
#include <QPaintEvent>
#include "mycustomstyle.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    // Create an instance of your custom style
    MyCustomStyle *customStyle = new MyCustomStyle(a.style());
    a.setStyle(customStyle); // Set it as the application style

    // QPushButton button("Click Me");




    MainWindow w;

    w.show();



    return a.exec();
}






