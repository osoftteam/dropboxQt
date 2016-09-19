/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesThumbnailArg.h"

namespace dropboxQt{

namespace files{
///ThumbnailArg

ThumbnailArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ThumbnailArg::toJson(QJsonObject& js)const{

    if(!m_path.isEmpty())
        js["path"] = m_path;
    m_format.toJson(js, "format");
    m_size.toJson(js, "size");
}

void ThumbnailArg::fromJson(const QJsonObject& js){

    m_path = js["path"].toString();
    m_format.fromJson(js["format"].toObject());
    m_size.fromJson(js["size"].toObject());
}

QString ThumbnailArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ThumbnailArg ThumbnailArg::EXAMPLE(){
    ThumbnailArg rv;
    rv.path = "test1value";
    rv.format = files::ThumbnailFormat::EXAMPLE();
    rv.size = files::ThumbnailSize::EXAMPLE();
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
