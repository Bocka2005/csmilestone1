#include "level1.h"
#include "coin.h"
#include <cstdlib>
Level1::Level1(QGraphicsScene *gscene, QGraphicsPixmapItem *groundp, QGraphicsPixmapItem *cloudsp,
                                       QGraphicsPixmapItem *cloudsp2, QGraphicsPixmapItem *cloudsp3):
    LevelClass(gscene), ground(groundp),
    clouds(cloudsp), clouds2(cloudsp2), clouds3(cloudsp3)
{
}
void Level1::update_scene(){
    int ground_level = scene->height() - ground->boundingRect().height();
    int coin_height = Coin().boundingRect().height();

    cpack1 = new CoinsPack(3);
    scene->addItem(cpack1);
    cpack1->setPos(100, ground_level - coin_height - 3);

    platform1 = new Platform(Platform::SHORT);
    platform1->setPos(250, ground_level - platform1->boundingRect().height() - 70);
    scene->addItem(platform1);

    cpack2 = new CoinsPack(10);
    cpack2->setPos(platform1->x() + 30, platform1->y() - coin_height - 3);
    scene->addItem(cpack2);

    spikes1 = new Spikes();
    spikes1->setPos(750, ground_level - spikes1->boundingRect().height() + 2);
    scene->addItem(spikes1);

    cpack3 = new CoinsPack(3);
    cpack3->setPos(spikes1->x() + 5, spikes1->y() - coin_height - 120);
    scene->addItem(cpack3);

    platform2 = new Platform(Platform::LONG);
    platform2->setPos(1100, ground_level - platform2->boundingRect().height() - 70);
    scene->addItem(platform2);

    cpack4 = new CoinsPack(3);
    cpack4->setPos(platform2->x() + 30, platform2->y() - coin_height - 3);
    scene->addItem(cpack4);

    spikes2 = new Spikes();
    spikes2->setPos(platform2->x() + (platform2->boundingRect().width() - spikes2->boundingRect().width()) / 2,
                    platform2->y() - spikes2->boundingRect().height() + 2);
    scene->addItem(spikes2);

    cpack5 = new CoinsPack(3);
    cpack5->setPos(platform2->x() + platform2->boundingRect().width() - 100, platform2->y() - coin_height - 3);
    scene->addItem(cpack5);

    platform3 = new Platform(Platform::SHORT);
    platform3->setPos(platform2->x() + 500, platform2->y() - platform3->boundingRect().height() - 70);
    scene->addItem(platform3);

    cpack6 = new CoinsPack(10);
    cpack6->setPos(platform3->x() + 30, platform3->y() - coin_height - 3);
    scene->addItem(cpack6);

    spikes3 = new Spikes();
    spikes3->setPos(platform3->x() + 500, spikes1->y());
    scene->addItem(spikes3);

    cpack7 = new CoinsPack(3);
    cpack7->setPos(spikes3->x() + 5, cpack3->y());
    scene->addItem(cpack7);

    cpack8 = new CoinsPack(15);
    scene->addItem(cpack8);
    cpack8->setPos(2400, cpack1->y());

    checkpoint = new CheckPoint();
    // int checkpoint_x = 10000 - (checkpoint->boundingRect().width() + scene->width() / 2);
    int checkpoint_x = 3000;
    int checkpoint_y = ground_level - checkpoint->boundingRect().height() + 5;
    checkpoint->setPos(checkpoint_x, checkpoint_y);
    scene->addItem(checkpoint);
}

void Level1::move_cloud(QGraphicsPixmapItem *clouds_img, int dx){
    clouds_img->setX(clouds_img->x() + dx);
    if (clouds_img->x() + clouds_img->boundingRect().width() < 0)
        clouds_img->setPos(scene->width(), rand() % 200);
    else if (clouds_img->x() > scene->width())
        clouds_img->setPos(-clouds_img->boundingRect().width(), rand() % 200);
}

void Level1::move(int dx){
    if (ground->x() + dx > 0 || ground->x() + ground->boundingRect().width() + dx < scene->width())
        return;

    move_cloud(clouds, dx * 0.5);
    move_cloud(clouds2, dx);
    move_cloud(clouds3, dx * 1.2);

    ground->setX(ground->x() + dx);
    cpack1->setX(cpack1->x() + dx);
    platform1->setX(platform1->x() + dx);
    cpack2->setX(cpack2->x() + dx);
    spikes1->setX(spikes1->x() + dx);
    cpack3->setX(cpack3->x() + dx);
    platform2->setX(platform2->x() + dx);
    cpack4->setX(cpack4->x() + dx);
    spikes2->setX(spikes2->x() + dx);
    cpack5->setX(cpack5->x() + dx);
    platform3->setX(platform3->x() + dx);
    cpack6->setX(cpack6->x() + dx);
    spikes3->setX(spikes3->x() + dx);
    cpack7->setX(cpack7->x() + dx);
    cpack8->setX(cpack8->x() + dx);
    checkpoint->setX(checkpoint->x() + dx);
}
