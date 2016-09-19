/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesSaveCopyReferenceResult.h"

namespace dropboxQt{

namespace files{
///SaveCopyReferenceResult

SaveCopyReferenceResult::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void SaveCopyReferenceResult::toJson(QJsonObject& js)const{

    js["metadata"] = (QJsonObject)m_metadata;
}

void SaveCopyReferenceResult::fromJson(const QJsonObject& js){

    m_metadata.fromJson(js);
}

QString SaveCopyReferenceResult::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
SaveCopyReferenceResult SaveCopyReferenceResult::EXAMPLE(){
    SaveCopyReferenceResult rv;
    rv.metadata = files::Metadata::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
