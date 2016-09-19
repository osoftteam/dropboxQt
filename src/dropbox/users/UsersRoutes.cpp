/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#include "dropbox/users/UsersRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
#include "dropbox/endpoint/DropboxHost.h"

namespace dropboxQt{

namespace users{
UsersRoutes::UsersRoutes(Endpoint* p):m_end_point(p){
}

BasicAccount UsersRoutes::getAccount(const GetAccountArg& arg){
    QJsonObject js(arg);
    BasicAccount r = m_end_point->rpcStyle<BasicAccount, StructFromJsonLoader<BasicAccount>, GetAccountErrorException>("2/users/get_account", js);
    return r;
}

std::list <BasicAccount> UsersRoutes::getAccountBatch(const GetAccountBatchArg& arg){
    QJsonObject js(arg);
    std::list <BasicAccount> r = m_end_point->rpcStyle<std::list <BasicAccount>, ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>, GetAccountBatchErrorException>("2/users/get_account_batch", js);
    return r;
}

FullAccount UsersRoutes::getCurrentAccount(void){
    static const QJsonObject js;
    FullAccount r = m_end_point->rpcStyle<FullAccount, StructFromJsonLoader<FullAccount>, NotAnException >("2/users/get_current_account", js);
    return r;
}

SpaceUsage UsersRoutes::getSpaceUsage(void){
    static const QJsonObject js;
    SpaceUsage r = m_end_point->rpcStyle<SpaceUsage, StructFromJsonLoader<SpaceUsage>, NotAnException >("2/users/get_space_usage", js);
    return r;
}

GetAccountErrorException::GetAccountErrorException(const users::GetAccountError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetAccountErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    users::GetAccountError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetAccountErrorException(err, summary, status_code, message);
}

GetAccountBatchErrorException::GetAccountBatchErrorException(const users::GetAccountBatchError& err, const std::string& summary, int status_code, const std::string& message):ReplyException(message, status_code, summary), m_err(err){
    build(m_err.toString().toStdString());
}
void GetAccountBatchErrorException::raise(const QByteArray& data, int status_code, const std::string& message)
{
    users::GetAccountBatchError err;
    std::string summary;
    if(!data.isEmpty()){
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject js_in = doc.object();
        err.fromJson(js_in["error"].toObject());
        summary = js_in["error_summary"].toString().toStdString();
    }
    throw GetAccountBatchErrorException(err, summary, status_code, message);
}



}//users
}//dropboxQt
