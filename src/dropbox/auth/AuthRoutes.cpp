/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/auth/AuthRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
using namespace dropboxQt;
using namespace auth;

void AuthRoutes::tokenRevoke(){
    VOID_ARG_VOID_RESULT_DBC(tokenRevoke_AsyncCB);
}

DropboxVoidTask* AuthRoutes::tokenRevoke_Async()
{
    DropboxVoidTask* t = new DropboxVoidTask();
    m_end_point->rpcStyle<
        DropboxException>
        ("2/auth/token/revoke",
        t);
    return t;
}

void AuthRoutes::tokenRevoke_AsyncCB(
    std::function<void()> completed_callback ,
    std::function<void(std::unique_ptr<DropboxException>)> failed_callback)
{
    m_end_point->rpcStyle<
        DropboxException>
        ("2/auth/token/revoke",
        completed_callback,
        failed_callback);
}

