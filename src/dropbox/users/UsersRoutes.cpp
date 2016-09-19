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

IMPLEMENT_DBOX_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);
}//users
}//dropboxQt
