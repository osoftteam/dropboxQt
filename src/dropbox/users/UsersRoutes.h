/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"
#include "dropbox/users/UsersBasicAccount.h"
#include "dropbox/users/UsersFullAccount.h"
#include "dropbox/users/UsersGetAccountArg.h"
#include "dropbox/users/UsersGetAccountBatchArg.h"
#include "dropbox/users/UsersGetAccountBatchError.h"
#include "dropbox/users/UsersGetAccountError.h"
#include "dropbox/users/UsersSpaceUsage.h"

namespace dropboxQt{

class Endpoint;

namespace users{
    class UsersRoutes{
    public:
        UsersRoutes(Endpoint*);
            /**
            ApiRoute('get_account')


            Get information about a user's account.

            on error:GetAccountError throws exception GetAccountErrorException
            */
        std::unique_ptr<BasicAccount> getAccount(const GetAccountArg& );

            /**
            ApiRoute('get_account_batch')


            Get information about multiple user accounts.  At most 300 accounts
            may be queried per request.

            on error:GetAccountBatchError throws exception GetAccountBatchErrorException
            */
        std::list <BasicAccount> getAccountBatch(const GetAccountBatchArg& );

            /**
            ApiRoute('get_current_account')


            Get information about the current user's account.

            */
        std::unique_ptr<FullAccount> getCurrentAccount(void);

            /**
            ApiRoute('get_space_usage')


            Get the space usage information for the current user's account.

            */
        std::unique_ptr<SpaceUsage> getSpaceUsage(void);

    protected:
        Endpoint* m_end_point;
    };//UsersRoutes

    ///exception GetAccountError for get_account
    DECLARE_API_ERR_EXCEPTION(GetAccountErrorException, users::GetAccountError);

    ///exception GetAccountBatchError for get_account_batch
    DECLARE_API_ERR_EXCEPTION(GetAccountBatchErrorException, users::GetAccountBatchError);


}//users
}//dropboxQt
