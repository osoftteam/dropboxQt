/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "sharing"
***********************************************************/

#include "dropbox/sharing/SharingTransferFolderArg.h"

namespace dropboxQt{

namespace sharing{
///TransferFolderArg

TransferFolderArg::operator QJsonObject()const{
    QJsonObject js;
    this->toJson(js);
    return js;
}


void TransferFolderArg::toJson(QJsonObject& js)const{

    if(!m_shared_folder_id.isEmpty())
        js["shared_folder_id"] = QString(m_shared_folder_id);
    if(!m_to_dropbox_id.isEmpty())
        js["to_dropbox_id"] = QString(m_to_dropbox_id);
}

void TransferFolderArg::fromJson(const QJsonObject& js){

    m_shared_folder_id = js["shared_folder_id"].toString();
    m_to_dropbox_id = js["to_dropbox_id"].toString();
}

QString TransferFolderArg::toString(bool multiline)const
{
    QJsonObject js;
    toJson(js);
    QJsonDocument doc(js);
    QString s(doc.toJson(multiline ? QJsonDocument::Indented : QJsonDocument::Compact));
    return s;
}


std::unique_ptr<TransferFolderArg>  TransferFolderArg::factory::create(const QByteArray& data)
{
    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject js = doc.object();
    return create(js);
}


std::unique_ptr<TransferFolderArg>  TransferFolderArg::factory::create(const QJsonObject& js)
{
    std::unique_ptr<TransferFolderArg> rv;
    rv = std::unique_ptr<TransferFolderArg>(new TransferFolderArg);
    rv->fromJson(js);
    return rv;
}

#ifdef DROPBOX_QT_AUTOTEST
TransferFolderArg TransferFolderArg::EXAMPLE(){
    TransferFolderArg rv;
    rv.shared_folder_id = "test1value";
    rv.to_dropbox_id = "test2value";
    return rv;
}
#endif //DROPBOX_QT_AUTOTEST

}//sharing
}//dropboxQt
