/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesUploadSessionFinishArg.h"

namespace dropboxQt{

namespace files{
///UploadSessionFinishArg

UploadSessionFinishArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionFinishArg::toJson(QJsonObject& js)const{

    js["cursor"] = (QJsonObject)m_cursor;
    js["commit"] = (QJsonObject)m_commit;
}

void UploadSessionFinishArg::fromJson(const QJsonObject& js){

    m_cursor.fromJson(js);
    m_commit.fromJson(js);
}

QString UploadSessionFinishArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<UploadSessionFinishArg>  UploadSessionFinishArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<UploadSessionFinishArg>  UploadSessionFinishArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<UploadSessionFinishArg> rv;
    rv = std::unique_ptr<UploadSessionFinishArg>(new UploadSessionFinishArg);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
UploadSessionFinishArg UploadSessionFinishArg::EXAMPLE(){
    UploadSessionFinishArg rv;
    rv.cursor = files::UploadSessionCursor::EXAMPLE();
    rv.commit = files::CommitInfo::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
