#
# Project snowflake, Snowflake
#

TARGET = harbour-snowflake

CONFIG += sailfishapp

DEFINES += "APPVERSION=\\\"$${SPECVERSION}\\\""

message($${DEFINES})

SOURCES += src/snowflake.cpp \
	src/flake.cpp
	
HEADERS += src/flake.h

OTHER_FILES += qml/snowflake.qml \
    qml/cover/CoverPage.qml \
    qml/pages/Snowflake.qml \
    rpm/snowflake.spec \
    harbour-snowflake.desktop \
    harbour-snowflake.png \
    qml/pages/sc-snowflakes7.png

