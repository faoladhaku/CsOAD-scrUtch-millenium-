#include "drag.h"

drag::drag(QWidget *parent)
{
    setMinimumSize(250,600);
    setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
    setAcceptDrops(true);

    QLabel *mover_icon = new QLabel(this);
    mover_icon->setPixmap(QPixmap(":/image/Imagenes/mover.png"));
    mover_icon->move(10, 100);
    mover_icon->show();

    QLabel *girarD_icon = new QLabel(this);
    girarD_icon->setPixmap(QPixmap(":/image/Imagenes/girar_derecha.png"));
    girarD_icon->move(10, 130);
    girarD_icon->show();

    QLabel *girarI_icon = new QLabel(this);
    girarI_icon->setPixmap(QPixmap(":/image/Imagenes/girar_izquierda.png"));
    girarI_icon->move(10, 160);
    girarI_icon->show();

    QLabel *cambiarX_icon = new QLabel(this);
    cambiarX_icon->setPixmap(QPixmap(":/image/Imagenes/cambiar_x.png"));
    cambiarX_icon->move(10, 210);
    cambiarX_icon->show();

    QLabel *cambiarY_icon = new QLabel(this);
    cambiarY_icon->setPixmap(QPixmap(":/image/Imagenes/cambiar_y.png"));
    cambiarY_icon->move(10, 240);
    cambiarY_icon->show();

    QLabel *dirigirPuntos_icon = new QLabel(this);
    dirigirPuntos_icon->setPixmap(QPixmap(":/image/Imagenes/dirigir_a.png"));
    dirigirPuntos_icon->move(10, 270);
    dirigirPuntos_icon->show();

    QLabel *fijarX_icon = new QLabel(this);
    fijarX_icon->setPixmap(QPixmap(":/image/Imagenes/fijar_x.png"));
    fijarX_icon->move(10, 300);
    fijarX_icon->show();

    QLabel *fijarY_icon = new QLabel(this);
    fijarY_icon->setPixmap(QPixmap(":/image/Imagenes/fijar_y.png"));
    fijarY_icon->move(10, 330);
    fijarY_icon->show();

}

void drag::dropEvent(QDropEvent *ev)
{
    if (ev->mimeData()->hasFormat("application/x-dnditemdata")) {

        if (ev->source() == this) {
            ev->setDropAction(Qt::MoveAction);
            ev->accept();
        }
        else {
            ev->acceptProposedAction();
        }
    }
    else {
        ev->ignore();
    }
}
