/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace team{
    class BaseDfbReport{
        /**
            Base report structure.

            field: start_date: First date present in the results as 'YYYY-MM-DD'
                or None.
        */

    public:
        BaseDfbReport(){};

        BaseDfbReport(const QString& arg){ m_start_date = arg; };

    public:
        ///First date present in the results as 'YYYY-MM-DD' or None.
        QString startDate()const{return m_start_date;};
        const BaseDfbReport& setStartdate(const QString& arg){m_start_date=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static BaseDfbReport EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///First date present in the results as 'YYYY-MM-DD' or None.
        QString m_start_date;

    };//BaseDfbReport

}//team
}//dropboxQt
