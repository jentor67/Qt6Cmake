#ifndef CPUCORES_H
#define CPUCORES_H

#include <QObject>
#include <QString>

class CPUCores : QObject
{
    Q_OBJECT
    // Use Q_PROPERTY to expose properties to the meta-object system
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)

public:
    explicit CPUCores(QObject *parent = nullptr);
    CPUCores(const QString &name, int age, QObject *parent = nullptr);

    QString name() const;
    void setName(const QString &name);

    int age() const;
    void setAge(int age);

signals:
    void nameChanged();
    void ageChanged();

private:
    QString m_name;
    int m_age;
};

#endif // CPUCORES_H
