/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingUnshareFolderArg.h"

namespace dropboxQt{

namespace sharing{
///UnshareFolderArg

UnshareFolderArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UnshareFolderArg::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = QString(m_shared_folder_id);
    js["leave_a_copy"] = m_leave_a_copy;
}

void UnshareFolderArg::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    m_leave_a_copy = js["leave_a_copy"].toVariant().toBool();
}

QString UnshareFolderArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
UnshareFolderArg UnshareFolderArg::EXAMPLE(){
    UnshareFolderArg rv;
    rv.shared_folder_id = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
