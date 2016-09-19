/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesCreateFolderArg.h"

namespace dropboxQt{

namespace files{
///CreateFolderArg

CreateFolderArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void CreateFolderArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
}

void CreateFolderArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
}

QString CreateFolderArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
CreateFolderArg CreateFolderArg::EXAMPLE(){
    CreateFolderArg rv;
    rv.path = "test1value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
