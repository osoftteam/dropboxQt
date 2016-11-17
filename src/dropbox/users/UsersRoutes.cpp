/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/users/UsersRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
using namespace dropboxQt;
using namespace users;

std::unique_ptr<BasicAccount> UsersRoutes::getAccount(const GetAccountArg& arg ){
    DROPBOX_BLOCKING_CALL(getAccount_Async, BasicAccount, arg);
}

void UsersRoutes::getAccount_Async(
    const GetAccountArg& arg,
    std::function<void(std::unique_ptr<BasicAccount>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetAccountArg,
        std::unique_ptr<BasicAccount>,
        BasicAccount::factory,
        GetAccountErrorException>
        ("2/users/get_account",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <BasicAccount>> UsersRoutes::getAccountBatch(const GetAccountBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(getAccountBatch_Async, std::list <BasicAccount>, arg);
}

void UsersRoutes::getAccountBatch_Async(
    const GetAccountBatchArg& arg,
    std::function<void(std::unique_ptr<std::list <BasicAccount>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetAccountBatchArg,
        std::unique_ptr<std::list <BasicAccount>>,
        ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>,
        GetAccountBatchErrorException>
        ("2/users/get_account_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FullAccount> UsersRoutes::getCurrentAccount(void){
    VOID_ARG_DBC(getCurrentAccount_Async, FullAccount);
}

void UsersRoutes::getCurrentAccount_Async(
    std::function<void(std::unique_ptr<FullAccount>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        std::unique_ptr<FullAccount>,
        FullAccount::factory,
        DropboxException>
        ("2/users/get_current_account",
        completed_callback,
        failed_callback);
}

std::unique_ptr<SpaceUsage> UsersRoutes::getSpaceUsage(void){
    VOID_ARG_DBC(getSpaceUsage_Async, SpaceUsage);
}

void UsersRoutes::getSpaceUsage_Async(
    std::function<void(std::unique_ptr<SpaceUsage>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        std::unique_ptr<SpaceUsage>,
        SpaceUsage::factory,
        DropboxException>
        ("2/users/get_space_usage",
        completed_callback,
        failed_callback);
}

IMPLEMENT_API_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);
IMPLEMENT_API_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);
