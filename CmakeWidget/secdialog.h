#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(const QString &data, QWidget *parent = nullptr);
    //ChildWindow(const QString &data, QWidget *parent = nullptr);
    ~SecDialog();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
