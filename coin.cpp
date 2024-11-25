#include "coin.h"

Coin::Coin(QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/attachments (1)/coin.png"));
}
