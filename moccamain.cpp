#include "moccamain.h"
#include "ui_moccamain.h"
#include "moccaflux.h"

MoccaMain::MoccaMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MoccaMain)
{
    ui->setupUi(this);
}

MoccaMain::~MoccaMain()
{
    delete ui;
}

void MoccaMain::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MoccaMain::startConnecting()
{
    catalogSocket.connectToHost(ui->txtIP->text(), ui->spnPort->value());
}

void MoccaMain::connectedToServer()
{
    QString requete;
    requete = "GET /catalogue.txt HTTP/1.1" CRLF CRLF;
    catalogSocket.write(requete.toLatin1());
}

void MoccaMain::receiveCatalog()
{
    while(catalogSocket.bytesAvailable() && !reponse.endsWith(CRLF CRLF))
        reponse += catalogSocket.readLine();

    if(!reponse.endsWith(CRLF CRLF))
        return;

    reponse = reponse.mid(reponse.indexOf(CRLF CRLF));

    QStringList lignes = reponse.split(CRLF);

    for(int i=2; i < lignes.size(); i++){
        QRegExp rgxp("Object ID=([0-9]*) name=(.*) type=(.*) address=([0-9.]*) "
                     "port=([0-9]*) protocol=([A-Z_]*) ips=([0-9.]*)");
        rgxp.exactMatch(reponse);

        MoccaFlux mf(rgxp.cap(1).toInt(), rgxp.cap(2), rgxp.cap(3),
                     QHostAddress(rgxp.cap(4)), rgxp.cap(5).toInt(),
                     MoccaFlux::chooseProtocol(rgxp.cap(6)), rgxp.cap(7).toDouble());


    }
}

