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
/*private:

    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event) ;
    void dropEvent(QDropEvent *event);
    void mousePressEvent(QMouseEvent *event);
*/
};

#endif // SCREEN_H
