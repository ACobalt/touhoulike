
#ifndef ENEMYBODY_H
#define ENEMYBODY_H

#include <QGraphicsEllipseItem>



class EnemyBody : public QObject, QGraphicsPixmapItem
{
    Q_OBJECT
public:
    EnemyBody();
    void advance(int phase);
    void DoCollision();
    void Clear();
    friend class SceneGame;
private:
    int HP;
    void setHP(int hp);
};

#endif // ENEMYBODY_H
