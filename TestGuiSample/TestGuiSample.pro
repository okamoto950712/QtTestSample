QT += testlib
QT += gui core widgets
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_testcase.cpp

include(../GuiSample/GuiSample.pri)
