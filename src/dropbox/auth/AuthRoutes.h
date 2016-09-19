/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#pragma once


namespace dropboxQt{

class Endpoint;
class DropboxRequestConfig;
class DropboxAuthInfo;

namespace auth{
    class AuthRoutes{
    public:
        AuthRoutes(Endpoint*);
            /**
            ApiRoute('token/revoke')

            Disables the access token used to authenticate the call.
            on error:Void
            */
        void tokenRevoke(void);

    protected:
        Endpoint* m_end_point;
    };//AuthRoutes


}//auth
}//dropboxQt
