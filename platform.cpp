#include "platform.h"

const QString Platform::LONG = "long";
const QString Platform::SHORT = "short";
Platform::Platform(const QString &platform_type, QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/attachments (1)/" + platform_type + "-platform.png"));
}
