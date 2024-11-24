#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class Score : public QGraphicsItemGroup  {
public:
    Score(QGraphicsItem *parent = nullptr);
    void increase_score();
    int get_current_score();
private:
    int current_score;
    QGraphicsPixmapItem *coin_icon;
    QGraphicsTextItem *score_text;
};

#endif // SCORE_H
