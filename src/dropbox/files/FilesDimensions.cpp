/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesDimensions.h"

namespace dropboxQt{

namespace files{
///Dimensions

Dimensions::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void Dimensions::toJson(QJsonObject& js)const{

    js["height"] = m_height;
    js["width"] = m_width;
}

void Dimensions::fromJson(const QJsonObject& js){

    m_height = js["height"].toVariant().toInt();
    m_width = js["width"].toVariant().toInt();
}

QString Dimensions::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
Dimensions Dimensions::EXAMPLE(){
    Dimensions rv;
    rv.height = 1;
    rv.width = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
