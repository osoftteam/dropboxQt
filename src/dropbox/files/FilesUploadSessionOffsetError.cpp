/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/files/FilesUploadSessionOffsetError.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace files{
///UploadSessionOffsetError

UploadSessionOffsetError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void UploadSessionOffsetError::toJson(QJsonObject& js)const{

    js["correct_offset"] = m_correct_offset;
}

void UploadSessionOffsetError::fromJson(const QJsonObject& js){

    m_correct_offset = js["correct_offset"].toVariant().toInt();
}

QString UploadSessionOffsetError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<UploadSessionOffsetError>  UploadSessionOffsetError::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<UploadSessionOffsetError>  UploadSessionOffsetError::factory::create(const QJsonObject& js)
{
    std::unique_ptr<UploadSessionOffsetError> rv;
    rv = std::unique_ptr<UploadSessionOffsetError>(new UploadSessionOffsetError);
    rv->fromJson(js);
    return rv;
}

}//files
}//dropboxQt
