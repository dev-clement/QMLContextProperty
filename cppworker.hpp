#ifndef CPPWORKER_HPP
#define CPPWORKER_HPP

#include <QObject>
#include <QString>

class CppWorker : public QObject {
    Q_OBJECT
public:
    explicit CppWorker(QObject *po_object = nullptr);

    // Q_INVOKABLE
    Q_INVOKABLE void regularMethod();
    Q_INVOKABLE QString regularMethodWithReturn(const QString &name, int age);

public slots:
    void cppSlot();
};

#endif // CPPWORKER_HPP
