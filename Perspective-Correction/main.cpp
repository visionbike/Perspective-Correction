#include "perspective_correction.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PerspectiveCorrection w;
    w.show();
    return a.exec();
}
