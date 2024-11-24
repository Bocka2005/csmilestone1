#include "spikes.h"

Spikes::Spikes(QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/imgs/spikes.png"));
}
