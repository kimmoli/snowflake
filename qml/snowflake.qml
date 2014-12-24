/*
    snowflake, Snowflake
*/

import QtQuick 2.0
import Sailfish.Silica 1.0
import harbour.snowflake.Flake 1.0

ApplicationWindow
{
    id: snowflake

    initialPage: Qt.resolvedUrl("pages/Snowflake.qml")
    cover: Qt.resolvedUrl("cover/CoverPage.qml")

    Flake
    {
        id: flake
    }
}


