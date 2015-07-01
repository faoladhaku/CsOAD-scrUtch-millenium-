#include "scrutch.h"
#include <QApplication>
#include "screen.h"

screen *pantalla;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pantalla = new screen ();
    pantalla->show();
    //scrutch w;
    //w.show();
    return a.exec();
}
