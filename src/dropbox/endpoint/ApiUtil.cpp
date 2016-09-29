#include <QFile>
#include <QJsonParseError>
#include <functional>
#include "ApiUtil.h"

namespace dropboxQt{

    bool loadJsonFromFile(QString path, QJsonObject& js)
    {
        QFile jf(path);
        if(!jf.open(QFile::ReadOnly)){
            return false;
        }
        QJsonParseError  err;
        QJsonDocument jd = QJsonDocument().fromJson(jf.readAll(), &err);
        if(err.error == QJsonParseError::NoError){
            js = jd.object();
            return true;
        }
        return false;
    };

    bool storeJsonToFile(QString path, const QJsonObject js)
    {
        QFile jf(path);
        if(!jf.open(QFile::WriteOnly)){
            return false;
        }

        QJsonDocument jd(js);
        jf.write(jd.toJson());
        jf.close();
        return true;
    };


    VoidType& VoidType::instance()
    {
        static VoidType void_type;
        return void_type;
    };

    VoidType::operator QJsonObject ()const
    {
        static QJsonObject js;
        return js;
    };
}
