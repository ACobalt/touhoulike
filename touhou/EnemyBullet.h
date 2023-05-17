
#ifndef ENEMYBULLET_H
#define ENEMYBULLET_H

#include <QGraphicsEllipseItem>



class EnemyBullet : public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    EnemyBullet();
    void advance(int phase);
    void Clear();
    QRectF boundingRect()  const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    QPainterPath shape() const;
    friend class SceneGame;
};

#endif // ENEMYBULLET_H
