#include <QtWidgets>
#include "boton.h"

boton::boton(QWidget *parent)
    : QFrame (parent)
{

}

void boton::dragEnterEvent(QDragEnterEvent *ev)
{
    if (ev->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (ev->source() == this) {
            ev->setDropAction(Qt::MoveAction);
            ev->accept();
        } else {
            ev->acceptProposedAction();
        }
    } else {
        ev->ignore();
    }
}

void boton::dragMoveEvent(QDragMoveEvent *ev)
{
    if (ev->mimeData()->hasFormat("application/x-dnditemdata")) {
        if (ev->source() == this) {
            ev->setDropAction(Qt::MoveAction);
            ev->accept();
        } else {
            ev->acceptProposedAction();
        }
    } else {
        ev->ignore();
    }
}



void boton::mousePressEvent(QMouseEvent *ev)
{

    QLabel *child = static_cast<QLabel*>(childAt(ev->pos()));
    if (!child)
        return;

    QPixmap pixmap = *child->pixmap();

    QByteArray itemData;
    QDataStream dataStream(&itemData, QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(ev->pos() - child->pos());

    QMimeData *mimeData = new QMimeData;
    mimeData->setData("application/x-dnditemdata", itemData);


    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(ev->pos() - child->pos());


    QPixmap tempPixmap = pixmap;
    QPainter painter;
    painter.begin(&tempPixmap);
    painter.fillRect(pixmap.rect(), QColor(100, 20, 10, 12));
    painter.end();

    child->setPixmap(tempPixmap);

    if (drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction) {
        child->close();
    } else {
        child->show();
        child->setPixmap(pixmap);
    }
}
