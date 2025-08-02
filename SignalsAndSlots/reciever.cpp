#include "reciever.h"

Reciever::Reciever(QObject *parent)
    : QObject{parent}
{}

void Reciever::on_actionPerformed()
{
    qInfo() << "Executing slot from " << this;
}
