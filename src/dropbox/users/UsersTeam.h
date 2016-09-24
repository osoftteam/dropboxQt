/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class Team{
        /**
            Information about a team.

            field: id: The team's unique ID.
            field: name: The name of the team.
        */

    public:
        Team(){};

        Team(const QString& arg){ m_id = arg; };

    public:
        ///The team's unique ID.
        QString id()const{return m_id;};
        Team& setId(const QString& arg){m_id=arg; return *this;};

        ///The name of the team.
        QString name()const{return m_name;};
        Team& setName(const QString& arg){m_name=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static Team EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///The team's unique ID.
        QString m_id;

        ///The name of the team.
        QString m_name;

    };//Team

}//users
}//dropboxQt
