/*
    snowflake, Snowflake
*/

#ifndef FLAKE_H
#define FLAKE_H
#include <QObject>

class Flake : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString version READ readVersion NOTIFY versionChanged())

public:
    explicit Flake(QObject *parent = 0);
    ~Flake();

    QString readVersion();

signals:
    void versionChanged();

    //private:

};


#endif // FLAKE_H

