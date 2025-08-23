#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

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

private slots:
    void ExitWindow();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
