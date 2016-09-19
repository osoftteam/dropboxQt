QT       += network xml
QT       -= gui
CONFIG += staticlib
CONFIG -= flat
TEMPLATE = lib

# DROPBOX_QT_AUTOTEST will enable local test function
# it's needed for developers of the library and should
# be disabled for the users, it will increase binary size
# compilation time and sometimes decrease performance
# DEFINES += DROPBOX_QT_AUTOTEST

DROPBOX_MODULES = async auth files properties sharing team team_common team_policies users endpoint
SRC_DIR = ../src
DROPBOX_DIR = $${SRC_DIR}/dropbox

for(m, DROPBOX_MODULES){
       d = $${DROPBOX_DIR}/$${m}
       exists($${d}){
	   HEADERS += $${d}/*.h	
	   SOURCES += $${d}/*.cpp
       }
}

HEADERS += $${DROPBOX_DIR}/*.h
SOURCES += $${DROPBOX_DIR}/*.cpp

INCLUDEPATH += $${SRC_DIR}

TARGET = dropboxQt
