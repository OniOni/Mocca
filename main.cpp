#include "qapplication.h"
#include "moccamain.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    MoccaMain mc;
    mc.setVisible(true);
    app.exec();
}
