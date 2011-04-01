#ifndef MOCCAVIDEO_H
#define MOCCAVIDEO_H

#include <QWidget>

namespace Ui {
    class MoccaVideo;
}

class MoccaVideo : public QWidget {
    Q_OBJECT
public:
    MoccaVideo(QWidget *parent = 0);
    ~MoccaVideo();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MoccaVideo *ui;
};

#endif // MOCCAVIDEO_H
