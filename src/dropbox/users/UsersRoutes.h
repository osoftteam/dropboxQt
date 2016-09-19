/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once

#include "dropbox/users/UsersBasicAccount.h"
#include "dropbox/users/UsersFullAccount.h"
#include "dropbox/users/UsersGetAccountArg.h"
#include "dropbox/users/UsersGetAccountBatchArg.h"
#include "dropbox/users/UsersGetAccountBatchError.h"
#include "dropbox/users/UsersGetAccountError.h"
#include "dropbox/users/UsersSpaceUsage.h"

namespace dropboxQt{

class Endpoint;
class DropboxRequestConfig;
class DropboxAuthInfo;

namespace users{
    class UsersRoutes{
    public:
        UsersRoutes(Endpoint*);
            /**
            ApiRoute('get_account')

            Get information about a user's account.
            on error:GetAccountError
            */
        BasicAccount getAccount(const GetAccountArg&);

            /**
            ApiRoute('get_account_batch')

            Get information about multiple user accounts.  At most 300 accounts
            may be queried per request.
            on error:GetAccountBatchError
            */
        std::list <BasicAccount> getAccountBatch(const GetAccountBatchArg&);

            /**
            ApiRoute('get_current_account')

            Get information about the current user's account.
            on error:Void
            */
        FullAccount getCurrentAccount(void);

            /**
            ApiRoute('get_space_usage')

            Get the space usage information for the current user's account.
            on error:Void
            */
        SpaceUsage getSpaceUsage(void);

    protected:
        Endpoint* m_end_point;
    };//UsersRoutes

    ///exception GetAccountError for get_account
    class GetAccountErrorException: public ReplyException{
    public:
        const users::GetAccountError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetAccountErrorException(const users::GetAccountError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        users::GetAccountError m_err;
    };

    ///exception GetAccountBatchError for get_account_batch
    class GetAccountBatchErrorException: public ReplyException{
    public:
        const users::GetAccountBatchError& err()const {return m_err;}
        static void raise(const QByteArray& data, int status_code, const std::string& message);

    protected:
        GetAccountBatchErrorException(const users::GetAccountBatchError& err, const std::string& summary, int status_code, const std::string& message);
    protected:
        users::GetAccountBatchError m_err;
    };


}//users
}//dropboxQt
