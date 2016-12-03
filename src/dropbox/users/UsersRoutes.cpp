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
    DROPBOX_BLOCKING_CALL(getAccount_AsyncCB, BasicAccount, arg);
}

DropboxTask<BasicAccount>* UsersRoutes::getAccount_Async(const GetAccountArg& arg)
{
    DropboxTask<BasicAccount>* t = new DropboxTask<BasicAccount>();
    m_end_point->rpcStyle<
        GetAccountArg,
        BasicAccount,
        BasicAccount::factory,
        GetAccountErrorException>
        ("2/users/get_account",
        arg,
        t);
    return t;
}

void UsersRoutes::getAccount_AsyncCB(
    const GetAccountArg& arg,
    std::function<void(std::unique_ptr<BasicAccount>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetAccountArg,
        BasicAccount,
        BasicAccount::factory,
        GetAccountErrorException>
        ("2/users/get_account",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<std::list <BasicAccount>> UsersRoutes::getAccountBatch(const GetAccountBatchArg& arg ){
    DROPBOX_BLOCKING_CALL(getAccountBatch_AsyncCB, std::list <BasicAccount>, arg);
}

DropboxTask<std::list <BasicAccount>>* UsersRoutes::getAccountBatch_Async(const GetAccountBatchArg& arg)
{
    DropboxTask<std::list <BasicAccount>>* t = new DropboxTask<std::list <BasicAccount>>();
    m_end_point->rpcStyle<
        GetAccountBatchArg,
        std::list <BasicAccount>,
        ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>,
        GetAccountBatchErrorException>
        ("2/users/get_account_batch",
        arg,
        t);
    return t;
}

void UsersRoutes::getAccountBatch_AsyncCB(
    const GetAccountBatchArg& arg,
    std::function<void(std::unique_ptr<std::list <BasicAccount>>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        GetAccountBatchArg,
        std::list <BasicAccount>,
        ListFromJsonLoader<std::list <BasicAccount>, BasicAccount>,
        GetAccountBatchErrorException>
        ("2/users/get_account_batch",
        arg,
        completed_callback,
        failed_callback);
}

std::unique_ptr<FullAccount> UsersRoutes::getCurrentAccount(void){
    VOID_ARG_DBC(getCurrentAccount_AsyncCB, FullAccount);
}

DropboxTask<FullAccount>* UsersRoutes::getCurrentAccount_Async()
{
    DropboxTask<FullAccount>* t = new DropboxTask<FullAccount>();
    m_end_point->rpcStyle<
        FullAccount,
        FullAccount::factory,
        DropboxException>
        ("2/users/get_current_account",
        t);
    return t;
}

void UsersRoutes::getCurrentAccount_AsyncCB(
    std::function<void(std::unique_ptr<FullAccount>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        FullAccount,
        FullAccount::factory,
        DropboxException>
        ("2/users/get_current_account",
        completed_callback,
        failed_callback);
}

std::unique_ptr<SpaceUsage> UsersRoutes::getSpaceUsage(void){
    VOID_ARG_DBC(getSpaceUsage_AsyncCB, SpaceUsage);
}

DropboxTask<SpaceUsage>* UsersRoutes::getSpaceUsage_Async()
{
    DropboxTask<SpaceUsage>* t = new DropboxTask<SpaceUsage>();
    m_end_point->rpcStyle<
        SpaceUsage,
        SpaceUsage::factory,
        DropboxException>
        ("2/users/get_space_usage",
        t);
    return t;
}

void UsersRoutes::getSpaceUsage_AsyncCB(
    std::function<void(std::unique_ptr<SpaceUsage>)> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        SpaceUsage,
        SpaceUsage::factory,
        DropboxException>
        ("2/users/get_space_usage",
        completed_callback,
        failed_callback);
}

IMPLEMENT_API_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);
IMPLEMENT_API_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);
