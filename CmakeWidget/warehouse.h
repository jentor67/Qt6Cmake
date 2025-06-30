#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QDialog>

namespace Ui {
class Warehouse;
}

class Warehouse : public QDialog
{
    Q_OBJECT

public:
    explicit Warehouse(QWidget *parent = nullptr);
    ~Warehouse();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Warehouse *ui;
};

#endif // WAREHOUSE_H
