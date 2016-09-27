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

std::unique_ptr<BasicAccount> UsersRoutes::getAccount(const GetAccountArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle< std::unique_ptr<BasicAccount>, BasicAccount::factory, GetAccountErrorException>("2/users/get_account", js);
}

std::list <BasicAccount> UsersRoutes::getAccountBatch(const GetAccountBatchArg& arg){
    QJsonObject js(arg);
    return m_end_point->rpcStyle<std::list <BasicAccount>, ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>, GetAccountBatchErrorException>("2/users/get_account_batch", js);
}

std::unique_ptr<FullAccount> UsersRoutes::getCurrentAccount(void){
    static const QJsonObject js;
    return m_end_point->rpcStyle< std::unique_ptr<FullAccount>, FullAccount::factory, NotAnException >("2/users/get_current_account", js);
}

std::unique_ptr<SpaceUsage> UsersRoutes::getSpaceUsage(void){
    static const QJsonObject js;
    return m_end_point->rpcStyle< std::unique_ptr<SpaceUsage>, SpaceUsage::factory, NotAnException >("2/users/get_space_usage", js);
}

IMPLEMENT_DBOX_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);
IMPLEMENT_DBOX_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);
}//users
}//dropboxQt
