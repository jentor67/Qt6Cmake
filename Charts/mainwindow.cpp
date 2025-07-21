#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    QChart *chart1 = new QChart();
    QLineSeries *series1 = new QLineSeries();
    series1->append(0, 6);
    series1->append(2, 4);
    series1->append(3, 8);
    series1->append(7, 4);
    series1->append(10, 5);
    chart1->addSeries(series1);
    chart1->setTitle("1st Simple Line Chart");
    chart1->createDefaultAxes();


    ui->graphicsView_1->setChart(chart1);

    QChart *chart2 = new QChart();
    QLineSeries *series2 = new QLineSeries();
    series2->append(0, 3);
    series2->append(2, 2);
    series2->append(3, 4);
    series2->append(7, 1);
    series2->append(10, 6);
    chart2->addSeries(series2);
    chart2->setTitle("2nd Simple Line Chart");
    chart2->createDefaultAxes();

    ui->graphicsView_2->setChart(chart2);

    QChart *chart3 = new QChart();
    QLineSeries *series3 = new QLineSeries();
    series3->append(0, 1);
    series3->append(2, 2);
    series3->append(3, 3);
    series3->append(7, 4);
    series3->append(10, 5);
    chart3->addSeries(series3);
    chart3->setTitle("3rd Simple Line Chart");
    chart3->createDefaultAxes();

    ui->graphicsView_3->setChart(chart3);

    QChart *chart4 = new QChart();
    QLineSeries *series4 = new QLineSeries();
    series4->append(0, 4);
    series4->append(2, 3);
    series4->append(3, 2);
    series4->append(7, 1);
    series4->append(10, 0);
    chart4->addSeries(series4);
    chart4->setTitle("4th Simple Line Chart");
    chart4->createDefaultAxes();

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

