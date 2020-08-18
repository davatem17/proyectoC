#include "dubasedatos.h"
#include <QtSql/QSqlError>

DuBaseDatos::DuBaseDatos(const QString &nombreBaseDatos,
                         const QString &nombreUsuario,
                         const QString &contrasenyaUsuario,
                         const QString &direccionServidor,
                         int puertoConexion)
{
    mDb = QSqlDatabase::addDatabase("QMYSQL");
    mDb.setDatabaseName(nombreBaseDatos);
    mDb.setUserName(nombreUsuario);
    mDb.setPassword(contrasenyaUsuario);
    mDb.setHostName(direccionServidor);
    mDb.setPort(puertoConexion);
}

bool DuBaseDatos::abreConexion(QString &mensajeError)
{
    if (!mDb.open()){
        mensajeError = mDb.lastError().text();
        return false;
    }
    return true;
}
