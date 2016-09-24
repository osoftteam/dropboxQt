/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#include "dropbox/team/TeamDateRangeError.h"

namespace dropboxQt{

namespace team{
///DateRangeError

DateRangeError::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js, "");
    return js;
}


void DateRangeError::toJson(QJsonObject& js, QString name)const{

    switch(m_tag){
        case DateRangeError_OTHER:{
            if(!name.isEmpty())
                js[name] = QString("other");
        }break;
    }//switch
}

void DateRangeError::fromJson(const QJsonObject& js){

    QString s = js[".tag"].toString();
    if(s.compare("other") == 0){
        m_tag = DateRangeError_OTHER;

    }
}

QString DateRangeError::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js, "DateRangeError");
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}

#ifdef DROPBOX_QT_AUTOTEST
DateRangeError DateRangeError::EXAMPLE(){
    DateRangeError rv;
    rv.m_tag = DateRangeError_OTHER;
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//team
}//dropboxQt
