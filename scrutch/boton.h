#ifndef BOTON_H
#define BOTON_H
#include <QDebug>
#include <QtWidgets>
#include <QFrame>

class boton : public QFrame
{
public:
    boton(QWidget *parent=NULL);
protected:

    void dragEnterEvent(QDragEnterEvent *ev)Q_DECL_OVERRIDE;
    void dragMoveEvent(QDragMoveEvent *ev)Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *ev)Q_DECL_OVERRIDE;
};

#endif // BOTON_H
