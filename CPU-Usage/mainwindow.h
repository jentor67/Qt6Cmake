#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

#include "QGridLayout"
#include "QChar"
#include "QChartView"
// #include "QtCore"
// #include "QtGui"
#include "QtCharts"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;

}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString processBash(QString command);
    void refreshCPU(int cpus);
    void clearLayout(QLayout *layout);
    void addtoChartMulti(QQueue<QStack<float>> ccq);
    void addtoChart(QLineSeries *series);
    QLineSeries *cpuseries = new QLineSeries();
    QSet<QLineSeries*> CPUCoreList;
    QQueue<QStack<float>> CPUCoreQueue;
    //QSet<QString> CPUCoreList
    double monitorFreq = 1;
    int cpus;

private slots:
    void ExitWindow();


    void on_actionExit_triggered();

    void on_horizontalSlider_actionTriggered(int action);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
