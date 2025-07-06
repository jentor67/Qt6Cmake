#ifndef OPENJSON_H
#define OPENJSON_H

#include <QDialog>

namespace Ui {
class OpenJSON;
}

class OpenJSON : public QDialog
{
    Q_OBJECT

public:
    explicit OpenJSON(QWidget *parent = nullptr);
    ~OpenJSON();

private:
    Ui::OpenJSON *ui;
};

#endif // OPENJSON_H
