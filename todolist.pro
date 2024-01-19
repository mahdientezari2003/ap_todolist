QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog_signup.cpp \
    firstpage.cpp \
    main.cpp \
    mainwindow.cpp \
    organization.cpp \
    project.cpp \
    task.cpp \
    team.cpp \
    team_management.cpp \
    user.cpp

HEADERS += \
    data.h \
    dialog_signup.h \
    firstpage.h \
    mainwindow.h \
    organization.h \
    project.h \
    task.h \
    team.h \
    team_management.h \
    user.h

FORMS += \
    dialog_signup.ui \
    firstpage.ui \
    mainwindow.ui \
    team_management.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
