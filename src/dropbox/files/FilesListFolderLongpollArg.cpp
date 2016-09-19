/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesListFolderLongpollArg.h"

namespace dropboxQt{

namespace files{
///ListFolderLongpollArg

ListFolderLongpollArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFolderLongpollArg::toJson(QJsonObject& js)const{

    if(!m_cursor.isEmpty())
        js["cursor"] = QString(m_cursor);
    js["timeout"] = m_timeout;
}

void ListFolderLongpollArg::fromJson(const QJsonObject& js){

    m_cursor = js["cursor"].toString();
    m_timeout = js["timeout"].toVariant().toInt();
}

QString ListFolderLongpollArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ListFolderLongpollArg ListFolderLongpollArg::EXAMPLE(){
    ListFolderLongpollArg rv;
    rv.cursor = "test1value";
    rv.timeout = 2;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
