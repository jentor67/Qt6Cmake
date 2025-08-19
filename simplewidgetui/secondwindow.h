#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class SecondWindow : public QWidget {
    Q_OBJECT
public:
    explicit SecondWindow(QWidget *parent = nullptr);
};

#endif // SECONDWINDOW_H
