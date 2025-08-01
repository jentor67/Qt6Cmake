#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class MyCustomStyle;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString processBash(QString command);

private slots:
    void on_actionExit_triggered();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
