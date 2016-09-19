/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveCopyReferenceArg.h"

namespace dropboxQt{

namespace files{
///SaveCopyReferenceArg

SaveCopyReferenceArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SaveCopyReferenceArg::toJson(QJsonObject& js)const{

    if(!m_copy_reference.isEmpty())
        js["copy_reference"] = m_copy_reference;
    if(!m_path.isEmpty())
        js["path"] = m_path;
}

void SaveCopyReferenceArg::fromJson(const QJsonObject& js){

    m_copy_reference = js["copy_reference"].toString();
    m_path = js["path"].toString();
}

QString SaveCopyReferenceArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveCopyReferenceArg SaveCopyReferenceArg::EXAMPLE(){
    SaveCopyReferenceArg rv;
    rv.copy_reference = "test1value";
    rv.path = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
