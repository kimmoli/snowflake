/*
    snowflake, Snowflake
*/

#include "flake.h"

Flake::Flake(QObject *parent) :
    QObject(parent)
{
    emit versionChanged();
}

Flake::~Flake()
{
}

QString Flake::readVersion()
{
    return APPVERSION;
}

