#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "player.h"
#include "coin.h"
#include "spikes.h"
#include "health.h"
#include "score.h"
#include "coinspack.h"

class Game: public QGraphicsView {
public:
    Game(QWidget *parent = nullptr);
private slots:
    void updateEnvironment();
private:
    QGraphicsScene *scene;
    QGraphicsPixmapItem *ground;
    QGraphicsPixmapItem *clouds, *clouds2, *clouds3;
    Player *player;
    Health *health;
    Score *score;
};

#endif // GAME_H
