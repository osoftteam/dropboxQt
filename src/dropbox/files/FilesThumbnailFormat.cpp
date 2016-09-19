/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "files"
***********************************************************/

#include "dropbox/files/FilesThumbnailFormat.h"

namespace dropboxQt{

namespace files{
///ThumbnailFormat

ThumbnailFormat::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void ThumbnailFormat::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case ThumbnailFormat_JPEG:{
            if(!name.isEmpty())
                js[name] = QString("jpeg");
        }break;
        case ThumbnailFormat_PNG:{
            if(!name.isEmpty())
                js[name] = QString("png");
        }break;
    }//switch
}

void ThumbnailFormat::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("jpeg") == 0){
        m_tag = ThumbnailFormat_JPEG;
    }
    if(s.compare("png") == 0){
        m_tag = ThumbnailFormat_PNG;
    }
}

QString ThumbnailFormat::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "ThumbnailFormat");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
ThumbnailFormat ThumbnailFormat::EXAMPLE(){
    ThumbnailFormat rv;
    rv.m_tag = ThumbnailFormat_JPEG;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//files
}//dropboxQt
