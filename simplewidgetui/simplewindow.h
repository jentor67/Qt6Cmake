#ifndef SIMPLEWINDOW_H
#define SIMPLEWINDOW_H

#include <QDialog>

namespace Ui {
class SimpleWindow;
}

class SimpleWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SimpleWindow(QWidget *parent = nullptr);
    ~SimpleWindow();

private:
    Ui::SimpleWindow *ui;
};

#endif // SIMPLEWINDOW_H
