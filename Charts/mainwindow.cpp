#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
// ... other Qt Charts classes as needed

// #include "QBarSet"
// #include "QBarSeries"
// #include "QChart"
// #include "QBarCategoryAxis"
// #include "QValueAxis"
// #include "QLineSeries"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLineSeries *series = new QLineSeries();

    series->append(0,3);
    series->append(1,5);
    series->append(2,7);
    series->append(3,8);
    series->append(4,1);
    series->append(5,5);
    series->append(6,10);
    series->append(7,9);
    series->append(8,4);
    series->append(9,3);

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0,12);
    chart->axes(Qt::Horizontal).first()->setRange(0,11);
    chart->setVisible(true);

    ui->graphicsView->setChart(chart);

    QChart *chart1 = new QChart();
    QLineSeries *series1 = new QLineSeries();
    series1->append(0, 6);
    series1->append(2, 4);
    series1->append(3, 8);
    series1->append(7, 4);
    series1->append(10, 5);
    chart1->addSeries(series1);
    chart1->setTitle("Simple Line Chart");
    chart1->createDefaultAxes();

    ui->graphicsView_2->setChart(chart1);

}

MainWindow::~MainWindow()
{
    delete ui;

    // auto set0 = new QBarSet("Jane");
    // auto set1 = new QBarSet("John");
    // auto set2 = new QBarSet("Axel");
    // auto set3 = new QBarSet("Mary");
    // auto set4 = new QBarSet("Samantha");

    // *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    // *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    // *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    // *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    // *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    // QBarSeries *series = new QBarSeries;
    // series->append(set0);
    // series->append(set1);
    // series->append(set2);
    // series->append(set3);
    // series->append(set4);

    // auto chart = new QChart;
    // chart->addSeries(series);
    // chart->setTitle("Simple Bar Chart");
    // chart->setAnimationOptions(QChart::SeriesAnimations);

    // QStringList categories {"Jan", "Feb", "Mar", "Apr", "May", "Jun"};
    // auto axisX = new QBarCategoryAxis;
    // axisX->append(categories);
    // chart->addAxis(axisX, Qt::AlignBottom);
    // series->attachAxis(axisX);

    // auto axisY = new QValueAxis;
    // axisY->setRange(0,15);
    // chart->addAxis(axisY, Qt::AlignLeft);
    // series->attachAxis(axisY);

    // chart->legend()->setVisible(true);
    // chart->legend()->setAlignment(Qt::AlignBottom);

    //createDefaultChartView(chart);



    // MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    // ui->setupUi(this);
    //     ui->centralWidget = new QWidget(this);
    // this->setCentralWidget(ui->centralWidget);


    // //chart  = new QChart;
    // chartView = new QChartView(chart);
    // gridLayout = new QGridLayout(ui->centralwidget);
    // gridLayout->addWidget(chartView,0,0);


}

void MainWindow::on_actionExit_triggered()
{
    close();
}

