#include "moccavideo.h"
#include "ui_moccavideo.h"

MoccaVideo::MoccaVideo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoccaVideo)
{
    ui->setupUi(this);
}

MoccaVideo::~MoccaVideo()
{
    delete ui;
}

void MoccaVideo::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
