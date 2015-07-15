#include "principal.h"

principal::principal(QWidget *parent)
{
    setMinimumSize(500,600);
    setFrameStyle(QFrame::Sunken | QFrame::StyledPanel);

    QLabel *imagen =new QLabel(this);
    imagen->setPixmap(QPixmap(":/image/Imagenes/gato.png"));
    imagen->move(200,200);
    imagen->show();
}

