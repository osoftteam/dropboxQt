/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
***********************************************************/

#include "dropbox/auth/AuthRoutes.h"
#include "dropbox/endpoint/Endpoint.h"
#include "dropbox/endpoint/DropboxHost.h"

namespace dropboxQt{

namespace auth{
AuthRoutes::AuthRoutes(Endpoint* p):m_end_point(p){
}

void AuthRoutes::tokenRevoke(){
    static const QJsonObject js;
    m_end_point->rpcStyle<VoidResult, VoidFromJsonLoader, NotAnException>("2/auth/token/revoke", js);
}

}//auth
}//dropboxQt
