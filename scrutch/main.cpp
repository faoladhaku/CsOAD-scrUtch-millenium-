#include "scrutch.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    scrutch w;
    w.show();
    return a.exec();
}
