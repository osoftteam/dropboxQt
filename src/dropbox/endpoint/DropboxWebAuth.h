#pragma once

#include <QString>
#include "DropboxAuthInfo.h"

namespace dropboxQt{
    class DropboxAppInfo;

    class DropboxWebAuth
    {
    public:
        static QString getCodeAuthorizeUrl(const DropboxAppInfo& appInfo);
        static DropboxAuthInfo getTokenFromCode(const DropboxAppInfo& appInfo, QString code);
    };
};
