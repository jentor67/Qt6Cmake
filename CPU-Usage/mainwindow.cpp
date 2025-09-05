#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QProcess"
#include "QThread"
#include "MyButton.h"
#include "QTimer"
#include "QChar"
#include "QtMath"
#include "QList"
#include "QStack"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //  QPushButton johnbutton("Click Me");
    QPushButton *anotherButton = new QPushButton("Another Button", nullptr); // No parent
    ui->vlB1->addWidget(anotherButton);

    // Add button to vertical box vlB1
    MyButton *myButton = new MyButton("Click Me!",this);
    myButton->setStyleSheet("QPushButton { background-color: lightblue; color: navy; border: 2px solid darkblue; border-radius: 5px; padding: 5px; }"
                            "QPushButton:hover { background-color: lightcyan; }"
                            "QPushButton:pressed { background-color: steelblue; }");
    ui->vlB1->addWidget(myButton);
    // ###################################

    // Add button to vertical box vlB1
    MyButton *myButtonHitme = new MyButton("Hit ME!",this);
    myButtonHitme->setStyleSheet("QPushButton { background-color: lightblue; color: navy; border: 2px solid darkblue; border-radius: 5px; padding: 5px; }"
                                 "QPushButton:hover { background-color: lightcyan; }"
                                 "QPushButton:pressed { background-color: steelblue; }");
    ui->vlB1->addWidget(myButtonHitme);
    // ###################################


    // ############ CPU parts#######################
    QString command;

    // Get the number of CPU's
    command = "lscpu | grep \"^CPU(s):\" | awk '{print $2}'";

    cpus =  processBash(command).trimmed().toInt();  //remove \n and convert to integer

    // place value on label
    ui->lblCPUSValue->setText(QString::number(cpus));

    for ( int i = 0 ; i < cpus; ++i) {
        QLineSeries *cpuseries = new QLineSeries();
        CPUCoreList.insert(cpuseries);
    }


    QTimer *memTimer = new QTimer(this);
    connect(memTimer, &QTimer::timeout, this, [=]() {refreshCPU(cpus);});
    memTimer->start(1000/MainWindow::monitorFreq);



    for ( int i = 0 ; i < cpus; ++i) {
        QStack<float> s1;
        // for ( int j = 0; j < 5; j++){
        //     s1.push((j+1)*(i+1)*.45);

        // }
        CPUCoreQueue.enqueue(s1);
    }

    // for (QStack<float> value: CPUCoreQueue){
    //     while (!value.isEmpty())
    //         qDebug() << "Hello: " << value.pop(); // << Qt::endl;
    // }
}

void MainWindow::addtoChartMulti(QQueue<QStack<float>> ccq)
{
    QChart *chart1 = new QChart();

    int corei = 0;
    QLineSeries *cpuseries0 = new QLineSeries();
    QLineSeries *cpuseries1 = new QLineSeries();
    QLineSeries *cpuseries2 = new QLineSeries();
    QLineSeries *cpuseries3 = new QLineSeries();

    for ( QStack<float> cpuCoreValue: ccq){

        for (int tsec = 0 ;  tsec < cpuCoreValue.size(); ++tsec) {
            if( corei == 0 ) cpuseries0->append(tsec,cpuCoreValue[cpuCoreValue.size() - tsec -1]);
            if( corei == 1 ) cpuseries1->append(tsec,cpuCoreValue[cpuCoreValue.size() - tsec -1]);
            if( corei == 2 ) cpuseries2->append(tsec,cpuCoreValue[cpuCoreValue.size() - tsec -1]);
            if( corei == 3 ) cpuseries3->append(tsec,cpuCoreValue[cpuCoreValue.size() - tsec -1]);
        }
        if( corei == 0 )  chart1->addSeries(cpuseries0);
        if( corei == 1 )  chart1->addSeries(cpuseries1);
        if( corei == 2 )  chart1->addSeries(cpuseries2);
        if( corei == 3 )  chart1->addSeries(cpuseries3);
        corei = corei + 1;
    }

    // X axis
    QValueAxis *axisX = new QValueAxis();
    axisX->setTitleText("Seconds");
    //axisX->setLabelFormat("%i");
    chart1->addAxis(axisX, Qt::AlignBottom);
    cpuseries0->attachAxis(axisX);

    // Y axis
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("% Load");
    axisY->setLabelFormat("%i");
    chart1->addAxis(axisY, Qt::AlignLeft);
    cpuseries0->attachAxis(axisY);

    chart1->setTitle("Core Load");
    chart1->createDefaultAxes();
    ui->graphicsView->setChart(chart1);
}

void MainWindow::addtoChart(QLineSeries *series)
{
    QChart *chart1 = new QChart();

    chart1->addSeries(series);
    // QLineSeries *s1;
    // s1 = series;
    // chart1->addSeries(s1);
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0,60);
    chart1->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    chart1->setTitle("1st Simple Line Chart");
    chart1->createDefaultAxes();
    ui->graphicsView->setChart(chart1);
}

void MainWindow::clearLayout(QLayout *layout) {
    if (!layout)
        return;

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (QWidget *widget = item->widget()) {
            widget->hide();      // optional
            widget->deleteLater(); // safely schedules deletion
        }
        if (QLayout *childLayout = item->layout()) {
            clearLayout(childLayout); // recursive cleanup
        }
        delete item;
    }
}


void MainWindow::refreshCPU( int cpus)
{
    QString command;

    // clear layouts
    clearLayout(ui->VerticalCore);
    clearLayout(ui->VerticalLoad);

    // create starting command
    QString str1 = "echo 100 - $(mpstat -P ";
    QString str2 = " | tail -1 | awk \'{print $13}\') | bc";

    int i = 0;
    //qDebug() << "Time lapse";
    for ( QStack<float> cpuCoreValue: CPUCoreQueue){
        // need to append the last value to the QLineSeries and
        // replace all others with the previous value
        // replace first value with the newest value

        // latest value of the core
        QString strNumber = QString::number(i);
        command =  str1 + strNumber + str2;
        QString strLoad = processBash(command).trimmed();

        cpuCoreValue.push(strLoad.toFloat(0));
        CPUCoreQueue.replace(i,cpuCoreValue);


        //qDebug() << "Core: " << i << " Size: " << cpuCoreValue.size();
        //int tsec = 0;
        QLineSeries *cpuseries = new QLineSeries();
        for (int tsec = 0; tsec < cpuCoreValue.size(); ++tsec) {
            cpuseries->append(tsec,cpuCoreValue[tsec]);
            //qDebug() << "Time: " << tsec << " Load: " << cpuCoreValue[tsec];
        }
        //addtoChart(cpuseries);


        // add to VerticalCore
        QLabel *labelNumber =  new QLabel();
        labelNumber->setText(strNumber);
        labelNumber->setIndent(20);
        ui->VerticalCore->addWidget(labelNumber);

        // add to VerticalLoad
        QLabel *labelLoad = new QLabel();
        labelLoad->setText(strLoad);
        labelLoad->setIndent(20);
        ui->VerticalLoad->addWidget(labelLoad);
        i = i+1;

    }

    ui->VerticalCore->addStretch();
    ui->VerticalLoad->addStretch();

    addtoChartMulti(CPUCoreQueue);
    //addtoChart(cpuseries);
    //addtoChart(reversal);
}


QString MainWindow::processBash(QString command) {

    QProcess process;
    QString program = "/usr/bin/bash"; // Or "/usr/bin/bash" depending on your system

    QStringList arguments;
    arguments << "-c" <<command;
    process.start(program,arguments);

    // Optional: Wait for the process to finish
    if (!process.waitForFinished()) {
        qDebug() << "Process failed to finish:" << process.errorString();
    }

    // Optional: Read standard output
    QString output = process.readAllStandardOutput();

    return output;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ExitWindow()
{
    close();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_horizontalSlider_actionTriggered(int action)
{
    //ui->Frequency->setText(ui->horizontalSlider->setTickPosition())
}

