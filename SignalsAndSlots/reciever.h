#ifndef RECIEVER_H
#define RECIEVER_H
#include "QDebug"

#include <QObject>

class Reciever : public QObject
{
    Q_OBJECT
public:
    explicit Reciever(QObject *parent = nullptr);

signals:

public slots:
    void on_actionPerformed();
};

#endif // RECIEVER_H
