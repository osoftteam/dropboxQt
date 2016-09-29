/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
 www.prokarpaty.net
 29, Sep 2016
***********************************************************/

#include "dropbox/users/UsersRoutes.h"
#include "dropbox/endpoint/Endpoint.h"

namespace dropboxQt{

namespace users{
UsersRoutes::UsersRoutes(Endpoint* p):m_end_point(p){
}

std::unique_ptr<BasicAccount> UsersRoutes::getAccount(const GetAccountArg& arg ){
    return m_end_point->rpcStyle<GetAccountArg, std::unique_ptr<BasicAccount>, BasicAccount::factory, GetAccountErrorException>("2/users/get_account", arg);
}

std::list <BasicAccount> UsersRoutes::getAccountBatch(const GetAccountBatchArg& arg ){
    return m_end_point->rpcStyle<GetAccountBatchArg, std::list <BasicAccount>, ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>, GetAccountBatchErrorException>("2/users/get_account_batch", arg);
}

std::unique_ptr<FullAccount> UsersRoutes::getCurrentAccount(void){
    return m_end_point->rpcStyle<VoidType, std::unique_ptr<FullAccount>, FullAccount::factory, NotAnException >("2/users/get_current_account", VoidType::instance());
}

std::unique_ptr<SpaceUsage> UsersRoutes::getSpaceUsage(void){
    return m_end_point->rpcStyle<VoidType, std::unique_ptr<SpaceUsage>, SpaceUsage::factory, NotAnException >("2/users/get_space_usage", VoidType::instance());
}

IMPLEMENT_API_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);
IMPLEMENT_API_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);
}//users
}//dropboxQt
