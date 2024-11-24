#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QGraphicsPixmapItem>
#include <QImage>
#include "level1.h"

Game::Game(QWidget *parent):
    QGraphicsView(parent)
{
    const int WIDTH  = 1000;
    const int HEIGHT =  650;
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, WIDTH, HEIGHT);
    setBackgroundBrush(QBrush(QImage(":/imgs/sky.jpg")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(WIDTH, HEIGHT);

    ground = new QGraphicsPixmapItem(QPixmap(":/imgs/full-ground.png"));
    ground->setPos(0, HEIGHT - 60);
    scene->addItem(ground);

    clouds = new QGraphicsPixmapItem(QPixmap(":/imgs/clouds.png"));
    clouds->setPos(130, 50);
    scene->addItem(clouds);

    clouds2 = new QGraphicsPixmapItem(QPixmap(":/imgs/clouds2.png"));
    clouds2->setPos(200, 0);
    scene->addItem(clouds2);

    clouds3 = new QGraphicsPixmapItem(QPixmap(":/imgs/clouds3.png"));
    clouds3->setPos(600, 150);
    scene->addItem(clouds3);

    int ground_level = 590;

    player = new Player();
    player->setPos(0, ground_level - player->boundingRect().height() + 5);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

    health = new Health();
    health->setPos(2, 2);
    scene->addItem(health);
    player->set_health(health);

    score = new Score();
    scene->addItem(score);
    score->setPos(5, health->sceneBoundingRect().y() + health->sceneBoundingRect().height() + 5);
    player->set_score(score);

    Level1 *lvl1 = new Level1(scene, ground, clouds, clouds2, clouds3);
    lvl1->update_scene();
    player->set_level(lvl1);

    // coin = new Coin();
    // coin->setPos(100, ground_level - coin->boundingRect().height() - 3);
    // scene->addItem(coin);

    // spikes = new Spikes();
    // spikes->setPos(200, ground_level - spikes->boundingRect().height() + 2);
    // scene->addItem(spikes);

    // cpack = new CoinsPack(8);
    // scene->addItem(cpack);
    // cpack->setPos(500, ground_level - coin->boundingRect().height() - 3);
    show();
}
