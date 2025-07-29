#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include "MyButton.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    QVBoxLayout *layout = new QVBoxLayout(&w);


    MyButton *myButton = new MyButton("Click Me!", &w);
    layout->addWidget(myButton);

    QObject::connect(myButton, &MyButton::customClicked, [](){
             qDebug() << "Custom clicked signal received!";
         });

    w.show();





    return a.exec();
}






