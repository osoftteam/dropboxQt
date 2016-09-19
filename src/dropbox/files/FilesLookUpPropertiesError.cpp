/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesLookUpPropertiesError.h"

namespace dropboxQt{

namespace files{
///LookUpPropertiesError

LookUpPropertiesError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void LookUpPropertiesError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case LookUpPropertiesError_PROPERTY_GROUP_NOT_FOUND:{
            if(!name.isEmpty())
                js[name] = "property_group_not_found";
        }break;
    }//switch
}

void LookUpPropertiesError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("property_group_not_found") == 0){
        m_tag = LookUpPropertiesError_PROPERTY_GROUP_NOT_FOUND;
    }
}

QString LookUpPropertiesError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "LookUpPropertiesError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
LookUpPropertiesError LookUpPropertiesError::EXAMPLE(){
    LookUpPropertiesError rv;
    rv.m_tag = LookUpPropertiesError_PROPERTY_GROUP_NOT_FOUND;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
