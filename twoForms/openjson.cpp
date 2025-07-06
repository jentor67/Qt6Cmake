#include "openjson.h"
#include "ui_openjson.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>



OpenJSON::OpenJSON(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenJSON)
{
    ui->setupUi(this);
}

OpenJSON::~OpenJSON()
{
    delete ui;
}
