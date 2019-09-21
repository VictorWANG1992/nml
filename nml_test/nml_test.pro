TEMPLATE = app
CONFIG += console
CONFIG -= qt

INCLUDEPATH += /home/debian/codes/mk-laser/src/libnml/nml \
                            /home/debian/codes/mk-laser/src/libnml/rcs \
                            /home/debian/codes/mk-laser/src/libnml/cms \
                            /home/debian/codes/mk-laser/src/libnml/buffer \
                            /home/debian/codes/mk-laser/src/libnml/posemath \
                            /home/debian/codes/mk-laser/src/libnml/linklist \

LIBS += -L/home/debian/cnc/lib/ \

LIBS += -lnml \
             -lrtapi_math \

SOURCES += main.cpp \
    TestNmlMsg.cpp \
    TestChannel.cpp

HEADERS += \
    TestNmlMsg.h \
    TestChannel.h

