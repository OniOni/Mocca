#ifndef MOCCAMAIN_H
#define MOCCAMAIN_H

#include "moccaglobals.h"
#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
    class MoccaMain;
}

class MoccaMain : public QMainWindow {
    Q_OBJECT
public:
    MoccaMain(QWidget *parent = 0);
    ~MoccaMain();

protected:
    void changeEvent(QEvent *e);

    QTcpSocket catalogSocket;

public slots:
    void startConnecting();
    void connectedToServer();
    void receiveCatalog();

private:
    Ui::MoccaMain *ui;
    QString reponse;
};

#endif // MOCCAMAIN_H
