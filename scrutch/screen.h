#ifndef SCREEN_H
#define SCREEN_H

#include <QGraphicsView>
#include <QGraphicsScene>


class screen :public QGraphicsView
{
public:
    //constructor
    screen (QWidget *parent = NULL);
    //atributos
    QGraphicsScene *scene;
};

#endif // SCREEN_H
