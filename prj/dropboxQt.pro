QT       += network xml
QT       -= gui
CONFIG += staticlib
CONFIG -= flat
TEMPLATE = lib

API_MODULES = async auth files properties sharing team team_common team_policies users endpoint
SRC_DIR = ../src
API_DIR = $${SRC_DIR}/dropbox

for(m, API_MODULES){
       d = $${API_DIR}/$${m}
       exists($${d}){
	   HEADERS += $${d}/*.h	
	   SOURCES += $${d}/*.cpp
       }
}

HEADERS += $${API_DIR}/*.h
SOURCES += $${API_DIR}/*.cpp

INCLUDEPATH += $${SRC_DIR}

