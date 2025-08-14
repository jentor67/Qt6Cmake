#include "mainwindow.h"
#include "fullname.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    fullname f; // Create an instance of your dialog.
    f.show(); // Show the dialog.


    return a.exec();
}
