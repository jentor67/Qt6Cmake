#include "mainwindow.h"
#include <QApplication>
#include "QThread"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    w.show();

    // connect(ui->cpuRefreshButton, &QPushButton::clicked, this, [=]() {refreshCPU(cpus);});  //this works

    // for( int i = 0; i < 10; ++i){
    //     qDebug() << i << " loop";
    //     QThread::msleep(1000); //sleep for 1 second
    //     //        QThread::msleep(1000); //sleep for 1 second
    // }
    return a.exec();
}






