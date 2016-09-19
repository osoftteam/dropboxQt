/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesWriteMode.h"

namespace dropboxQt{

namespace files{
///WriteMode

WriteMode::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void WriteMode::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case WriteMode_ADD:{
            if(!name.isEmpty())
                js[name] = "add";
        }break;
        case WriteMode_OVERWRITE:{
            if(!name.isEmpty())
                js[name] = "overwrite";
        }break;
        case WriteMode_UPDATE:{
            if(!name.isEmpty())
                js[name] = "update";
            if(!m_update.isEmpty())
                js["update"] = m_update;
        }break;
    }//switch
}

void WriteMode::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("add") == 0){
        m_tag = WriteMode_ADD;
    }
    if(s.compare("overwrite") == 0){
        m_tag = WriteMode_OVERWRITE;
    }
    if(s.compare("update") == 0){
        m_tag = WriteMode_UPDATE;
    }
}

QString WriteMode::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "WriteMode");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
WriteMode WriteMode::EXAMPLE(){
    WriteMode rv;
    rv.update = "test3value";
    rv.m_tag = WriteMode_ADD;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
