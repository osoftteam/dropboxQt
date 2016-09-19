/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUnshareFileArg.h"

namespace dropboxQt{

namespace sharing{
///UnshareFileArg

UnshareFileArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UnshareFileArg::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = QString(m_file);
}

void UnshareFileArg::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
}

QString UnshareFileArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UnshareFileArg UnshareFileArg::EXAMPLE(){
    UnshareFileArg rv;
    rv.file = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
