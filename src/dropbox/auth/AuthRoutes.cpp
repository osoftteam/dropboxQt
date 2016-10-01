/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "auth"
 www.prokarpaty.net
***********************************************************/

#include "dropbox/auth/AuthRoutes.h"
#include "dropbox/endpoint/Endpoint.h"

namespace dropboxQt{

namespace auth{
AuthRoutes::AuthRoutes(Endpoint* p):m_end_point(p){
}

void AuthRoutes::tokenRevoke(){
    m_end_point->rpcStyle<VoidType, std::unique_ptr<VoidType>, VoidType, NotAnException>("2/auth/token/revoke", VoidType::instance());
}

}//auth
}//dropboxQt
