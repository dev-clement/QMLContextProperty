#include <QDebug>
#include "cppworker.hpp"

CppWorker::CppWorker(QObject *po_object) : QObject{ po_object } {}

void CppWorker::regularMethod() {
    qDebug() << "This is the C++ talking, regularMethod called !";
}

QString CppWorker::regularMethodWithReturn(const QString &name, int age) {
    qDebug() << "This is the C++ talking, regularMethodWithReturn with name: " << name << " and age: " << age;
    return QString(name + ": " + QString::number(age) + " years old !");
}

void CppWorker::cppSlot() {
    qDebug() << "This is C++ talking, cppSlot called !";
}
