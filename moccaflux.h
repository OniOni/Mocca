#ifndef MOCCAFLUX_H
#define MOCCAFLUX_H

#include <QObject>
#include <QHostAddress>
#include "moccaglobals.h"

class MoccaFlux : public QObject
{
    Q_OBJECT
public:
    explicit MoccaFlux(QObject *parent = 0);

    MoccaFlux(int id, QString name, QString type, QHostAddress address, int port,
                         protocole protocol, double ips);

    static protocole chooseProtocol(QString str);

signals:

public slots:

public:
    int id;
    QString name;
    QString type;
    QHostAddress address;
    int port;
    protocole protocol;
    double ips;
};

#endif // MOCCAFLUX_H
