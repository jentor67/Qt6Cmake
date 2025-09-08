#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    //chart 1
    QChart *chart1 = new QChart();
    QLineSeries *series1 = new QLineSeries();
    series1->append(0, 6);
    series1->append(2, 4);
    series1->append(3, 8);
    series1->append(7, 4);
    series1->append(10, 5);
    series1->setName("Series1");
    chart1->addSeries(series1);
    chart1->setTitle("1st Simple Line Chart");
    chart1->createDefaultAxes();

    chart1->legend()->setVisible(true);
    QFont legendFont1 = chart1->legend()->font();
    legendFont1.setPointSize(8); // Set font size in points
    chart1->legend()->setFont(legendFont1);


    ui->graphicsView_1->setChart(chart1);


    //chart 2
    QChart *chart2 = new QChart();
    QLineSeries *series2 = new QLineSeries();
    series2->append(0, 3);
    series2->append(2, 2);
    series2->append(3, 4);
    series2->append(7, 1);
    series2->append(10, 6);
    series2->setName("Series2");
    chart2->addSeries(series2);
    chart2->setTitle("2nd Simple Line Chart");
    chart2->createDefaultAxes();

    chart2->legend()->setVisible(true);
    QFont legendFont2 = chart2->legend()->font();
    legendFont2.setPointSize(8); // Set font size in points
    chart2->legend()->setFont(legendFont2);

    ui->graphicsView_2->setChart(chart2);


    // chart 3
    QChart *chart3 = new QChart();
    QLineSeries *series3 = new QLineSeries();
    series3->append(0, 1);
    series3->append(2, 2);
    series3->append(3, 3);
    series3->append(7, 4);
    series3->append(10, 5);
    series3->setName("Series3");
    chart3->addSeries(series3);
    chart3->setTitle("3rd Simple Line Chart");
    chart3->createDefaultAxes();

    chart3->legend()->setVisible(true);
    QFont legendFont3 = chart3->legend()->font();
    legendFont3.setPointSize(8); // Set font size in points
    chart3->legend()->setFont(legendFont3);
    ui->graphicsView_3->setChart(chart3);

    //chart 4
    QChart *chart4 = new QChart();

    QLineSeries *series4a = new QLineSeries();
    series4a->append(0, 4);
    series4a->append(2, 3);
    series4a->append(3, 2);
    series4a->append(7, 1);
    series4a->append(10, 0);
    series4a->setName("Series 4a");
    chart4->addSeries(series4a);

    QLineSeries *series4b = new QLineSeries();
    series4b->append(0, 2);
    series4b->append(2, 2);
    series4b->append(3, 6);
    series4b->append(7, 3);
    series4b->append(10, 4);
    series4b->setName("Series4b");
    chart4->addSeries(series4b);
    chart4->setTitle("4th Simple Line Chart");
    chart4->createDefaultAxes();

    chart4->legend()->setVisible(true);
    QFont legendFont4= chart4->legend()->font();
    legendFont4.setPointSize(8); // Set font size in points
    chart4->legend()->setFont(legendFont4);

    ui->graphicsView_4->setChart(chart4);

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_actionExit_triggered()
{
    close();
}

