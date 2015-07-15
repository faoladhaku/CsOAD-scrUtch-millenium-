#ifndef SCREEN_H
#define SCREEN_H

#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QHBoxLayout>
#include "drag.h"
#include "drop.h"
#include "boton.h"
#include "principal.h"

class screen
{
public:
    screen();
    drag *derecha;
    drop *izquierda;
    principal *gato;
private:
    QWidget Escenas;
    QHBoxLayout *horizontalLayout;
};

#endif // SCREEN_H
