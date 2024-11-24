#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include "health.h"
#include "score.h"
#include "level1.h"
class Player: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player(QGraphicsItem *parent = nullptr);
    void keyPressEvent(QKeyEvent *event);
    void set_health(Health *);
    void set_score(Score *);
    void set_level(Level1 *);
private:
    bool is_reversed;
    bool is_jumping;
    bool is_on_platform;
    QTimer* gravity_timer;
    int vertical_velocity;
    Health *health;
    Score *score;
    Level1 *lvl;

    void check_spikes_collision();
    void check_coin_collision();
    void check_checkpoint_collision();
    void check_platform_collision();
    void ckeck_collisions();
public slots:
    void apply_gravity();
};

#endif // PLAYER_H
