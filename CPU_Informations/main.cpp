#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <read_data_stream.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);


    std::vector<std::string> cpu_stats;
    cpu_stats = ReadCPUStats();
    parse_CPUVector(&cpu_stats);
    print_CPUVector(&cpu_stats);


    return app.exec();
}
