#include <QApplication>
#include "screen.h"
class screen;

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);

    QApplication a(argc, argv);
    screen newScreen;
    /*QString fileName;

        if (argc >= 2)
            fileName = argv[1];
        else
            fileName = ".";

        secciones tabdialog(fileName);
        tabdialog.show();*/

    return a.exec();
}
