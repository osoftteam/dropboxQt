/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
 www.prokarpaty.net
***********************************************************/

#pragma once

#include "dropbox/endpoint/ApiUtil.h"

namespace dropboxQt{

class Endpoint;

namespace auth{
    class AuthRoutes{
    public:
        AuthRoutes(Endpoint*);
            /**
            ApiRoute('token/revoke')


            Disables the access token used to authenticate the call.

            */
        void tokenRevoke(void);

    protected:
        Endpoint* m_end_point;
    };//AuthRoutes


}//auth
}//dropboxQt
