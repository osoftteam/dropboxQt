/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingListFoldersContinueArg.h"

namespace dropboxQt{

namespace sharing{
///ListFoldersContinueArg

ListFoldersContinueArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFoldersContinueArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = m_cursor;
}

void ListFoldersContinueArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
}

QString ListFoldersContinueArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFoldersContinueArg ListFoldersContinueArg::EXAMPLE(){
    ListFoldersContinueArg rv;
    rv.cursor = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
