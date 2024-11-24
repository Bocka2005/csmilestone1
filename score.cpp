#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent)
    : QGraphicsItemGroup(parent), current_score(0)
{
    coin_icon = new QGraphicsPixmapItem(QPixmap(":/imgs/coin.png"));
    coin_icon->setPos(0, 2);
    addToGroup(coin_icon);
    score_text = new QGraphicsTextItem("×0");
    score_text->setDefaultTextColor(Qt::yellow);
    score_text->setFont(QFont("Arial", 24));
    score_text->setPos(coin_icon->boundingRect().width(), 0);
    addToGroup(score_text);
}

void Score::increase_score() {
    ++current_score;
    score_text->setPlainText(QString("×") + QString::number(current_score));
}

int Score::get_current_score(){
    return current_score;
}
