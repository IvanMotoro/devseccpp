QT       += core gui
include ($$PWD/../Qt-Secret/src/Qt-Secret.pri)
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    crypt.cpp \
    customwidget.cpp \
    jsonModel.cpp \
    siteAdd.cpp \
    siteList.cpp

HEADERS += \
    mainwindow.h \
    crypt.h \
    customwidget.h \
    jsonModel.h \
    siteAdd.h \
    siteList.h

FORMS += \
    mainwindow.ui \
    siteList.ui \
    siteAdd.ui \
    customwidget.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
