#include "health.h"
#include "gameoverwindow.h"
#include <QGraphicsScene>

Health::Health(QGraphicsItem* parent)
    : QGraphicsItemGroup(parent), current_health(3) {
    for (int i = 0; i < 3; ++i) {
        QGraphicsPixmapItem* heart = new QGraphicsPixmapItem(QPixmap(":/attachments (1)/heart.png"));
        heart->setPos(i * 40, 0);
        addToGroup(heart);
        hearts.append(heart);
    }
}

void Health::decrease_health() {
    if (current_health > 0) {
        --current_health;
        hearts[current_health]->setVisible(false);
    }
    if (current_health == 0) {
        GameOverWindow *game_over = new GameOverWindow();
        game_over->exec();
    }
}

int Health::get_current_health(){
    return current_health;
}
