#include "scrutch.h"
#include <QApplication>
#include "screen.h"
#include <boton.h>

//screen *pantalla;

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(scrutch);
    QApplication a(argc, argv);
    //pantalla = new screen ();
    //pantalla->show();
    //scrutch w;
    //w.show();
    QWidget Escenas;
    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(new boton);
    horizontalLayout->addWidget(new boton);

    Escenas.setLayout(horizontalLayout);
    Escenas.setWindowTitle(QObject::tr("Scratch"));
    Escenas.show();

    return a.exec();
}
