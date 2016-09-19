/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification 
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include <QFile>
#include <QTextStream>
#include <QNetworkRequest>
#include "dropbox/endpoint/DropboxAuthInfo.h"
#include "dropbox/endpoint/DropboxHost.h"
#include "dropbox/DropboxClient.h"

namespace dropboxQt{

    class DropboxAutotest{
    public:
        DropboxAutotest(DropboxClient&);

        bool init(QString filePathName);
        void generateCalls();


        #ifdef DROPBOX_QT_AUTOTEST
        static DropboxAutotest& INSTANCE();
        DropboxAutotest& operator << (const char * string);
        DropboxAutotest& operator << (const QString & string);
        DropboxAutotest& operator << (const QByteArray & array);
        DropboxAutotest& operator << (const QNetworkRequest & req);
        #endif //DROPBOX_QT_AUTOTEST

    protected:
        DropboxClient& m_c;
        QFile m_f;
        QTextStream m_out;
    };//DropboxAutotest

}//dropboxQt
