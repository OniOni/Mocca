#include "moccaflux.h"

MoccaFlux::MoccaFlux(QObject *parent) :
    QObject(parent)
{

}

protocole MoccaFlux::chooseProtocol(QString str)
{
    protocole ret;

    switch(str){
    case "TCP_PULL":
       ret = TCP_PULL;
       break;
    case "TCP_PUSH":
       ret = TCP_PUSH;
       break;
    case "UDP_PULL":
       ret = UDP_PULL;
       break;
    case "UDP_PUSH":
        ret = UDP_PUSH;
        break;
    case "MCAST_PUSH":
        ret = MCAST_PUSH;
    }

    return ret;
}

MoccaFlux::MoccaFlux(int id, QString name, QString type, QHostAddress address, int port,
                     protocole protocol, double ips):
id(id), name(name), type(type), address(address), port(port), protocol(protocol), ips(ips)
{
}


