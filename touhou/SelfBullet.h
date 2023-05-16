
#ifndef SELFBULLET_H
#define SELFBULLET_H

#include <QGraphicsEllipseItem>



class SelfBullet : public QObject, QGraphicsEllipseItem
{
    Q_OBJECT
public:
    SelfBullet();
    friend class SceneGame;
    void advance(int phase);
    void DoCollision();
    void Clear();
};

#endif // SELFBULLET_H
