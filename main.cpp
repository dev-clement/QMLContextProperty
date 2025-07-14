#include <QDateTime>
#include <QQuickView>
#include <QQmlContext>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "cppworker.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    // Create the object on the cpp side
    CppWorker cppWorker{};
    engine.rootContext()->setContextProperty("cppWorker", &cppWorker);
    engine.rootContext()->setContextProperty("currentDateTime", QDateTime::currentDateTime());

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("ContextProperty", "Main");

    return app.exec();
}
