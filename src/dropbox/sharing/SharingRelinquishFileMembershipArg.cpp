/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingRelinquishFileMembershipArg.h"

namespace dropboxQt{

namespace sharing{
///RelinquishFileMembershipArg

RelinquishFileMembershipArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void RelinquishFileMembershipArg::toJson(QJsonObject& js)const{

    if(!m_file.isEmpty())
        js["file"] = QString(m_file);
}

void RelinquishFileMembershipArg::fromJson(const QJsonObject& js){

    m_file = js["file"].toString();
}

QString RelinquishFileMembershipArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
RelinquishFileMembershipArg RelinquishFileMembershipArg::EXAMPLE(){
    RelinquishFileMembershipArg rv;
    rv.file = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
