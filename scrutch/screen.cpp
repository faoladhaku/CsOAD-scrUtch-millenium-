#include "screen.h"
#include <QGraphicsScene>
#include <iostream>

using namespace std;

screen::screen()
{
    derecha = new drag;
    izquierda = new drop;
    gato =new principal;
    horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(derecha);
    horizontalLayout->addWidget(izquierda);
    horizontalLayout->addWidget(gato);

    Escenas.setLayout(horizontalLayout);
    Escenas.setWindowTitle(QObject::tr("Scratch"));
    Escenas.show();
}



