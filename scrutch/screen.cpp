#include "screen.h"

screen::screen(QWidget *parent)
{
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024,768);

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,104,768);
    setScene(scene);

}
