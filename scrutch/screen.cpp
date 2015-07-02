#include "screen.h"

screen::screen(QWidget *parent)
{
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(900,600);

    scene = new QGraphicsScene();
    //scene->setSceneRect(10,10,100,100);
    setScene(scene);

}
