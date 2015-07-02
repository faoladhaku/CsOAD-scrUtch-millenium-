#include <QtWidgets>
#include "boton.h"
#include <QLabel>
#include <QWidget>

boton::boton(QWidget *parent)
    : QFrame(parent)
{
    setMinimumSize(400,400);
    setFrameStyle(QFrame::Sunken | QFrame::Panel);
    setAcceptDrops(true);

    QLabel * bottone = new QLabel(this);
    bottone->setGeometry(100,100,200,200);
    bottone->setStyleSheet("background-image: (:image/Imagenes/gato.png)");
}
