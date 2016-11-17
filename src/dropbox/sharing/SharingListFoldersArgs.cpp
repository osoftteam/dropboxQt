/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/sharing/SharingListFoldersArgs.h"
using namespace dropboxQt;

namespace dropboxQt{

namespace sharing{
///ListFoldersArgs

ListFoldersArgs::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void ListFoldersArgs::toJson(QJsonObject& js)const{

    js["limit"] = m_limit;
    js["actions"] = struct_list2jsonarray(m_actions);
}

void ListFoldersArgs::fromJson(const QJsonObject& js){

    m_limit = js["limit"].toVariant().toInt();
    jsonarray2struct_list(js["actions"].toArray(), m_actions);
}

QString ListFoldersArgs::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<ListFoldersArgs>  ListFoldersArgs::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<ListFoldersArgs>  ListFoldersArgs::factory::create(const QJsonObject& js)
{
    std::unique_ptr<ListFoldersArgs> rv;
    rv = std::unique_ptr<ListFoldersArgs>(new ListFoldersArgs);
    rv->fromJson(js);
    return rv;
}

}//sharing
}//dropboxQt
