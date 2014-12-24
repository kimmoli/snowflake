/*
    snowflake, Snowflake
*/


#ifdef QT_QML_DEBUG
#include <QtQuick>
#endif

#include <sailfishapp.h>
#include <QtQml>
#include <QScopedPointer>
#include <QQuickView>
#include <QQmlEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include <QCoreApplication>
#include "flake.h"


int main(int argc, char *argv[])
{
    qmlRegisterType<Flake>("harbour.snowflake.Flake", 1, 0, "Flake");

    QScopedPointer<QGuiApplication> app(SailfishApp::application(argc, argv));
    QScopedPointer<QQuickView> view(SailfishApp::createView());
    view->setSource(SailfishApp::pathTo("qml/snowflake.qml"));
    view->show();

    return app->exec();
}

