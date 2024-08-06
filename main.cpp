#include <QGuiApplication>
#include <QIcon>
#include <QQmlApplicationEngine>

#include "playercontroller.h"
#include "audioinfo.h"
#include "audiosearchmodel.h"

int main(int argc, char *argv[])
{


    QGuiApplication app(argc, argv);

    app.setWindowIcon(QIcon(":/SongApp/assets/song.png"));

    PlayerController *playerController = new PlayerController(&app);
    AudioSearchModel *audioSearchModel = new AudioSearchModel(&app);

   //audioSearchModel->searchSong("hi");

    qmlRegisterSingletonInstance("PlayerController",1,0,"PlayerController",playerController);
    qmlRegisterSingletonInstance("AudioSearchModel",1,0,"AudioSearchModel",audioSearchModel);
    qmlRegisterType<AudioInfo>("AudioInfo", 1, 0, "AudioInfo");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/SongApp/Main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
