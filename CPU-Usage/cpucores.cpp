#include "cpucores.h"

//cpucores::cpucores() {}
CPUCores::CPUCores(QObject *parent) : QObject(parent) {}

CPUCores::CPUCores(const QString &name, int age, QObject *parent)
    : QObject(parent), m_name(name), m_age(age)
{}

QString CPUCores::name() const
{
    return m_name;
}

void CPUCores::setName(const QString &name)
{
    if (m_name != name) {
        m_name = name;
        emit nameChanged();
    }
}

int CPUCores::age() const
{
    return m_age;
}

void CPUCores::setAge(int age)
{
    if (m_age != age) {
        m_age = age;
        emit ageChanged();
    }
}
