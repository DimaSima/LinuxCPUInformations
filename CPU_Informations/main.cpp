#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>


#include <read_data_stream.h>
#include <cpu_core.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    Cpu_core my_cores;
    ReadCoreInformations(my_cores);     // write cpu info in struct member
    my_cores.setNumbersCpuCores();      // determine the number of cores

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("my_cores",&my_cores);     // binding C++ property to QML

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);



    return app.exec();
}
