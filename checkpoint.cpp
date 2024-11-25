#include "checkpoint.h"

CheckPoint::CheckPoint(QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/attachments (1)/checkpoint.png"));
}
