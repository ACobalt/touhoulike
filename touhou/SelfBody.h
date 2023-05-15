
#ifndef SELFBODY_H
#define SELFBODY_H

#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsView>

class SelfBody : public QObject,public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    SelfBody();
    void advance(int phase);
    void DoCollision();
    void keyPressEvent(QKeyEvent* event);
    void shoot();
    void bomb();
    QRectF boundingRect()  const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    QPainterPath shape();
};

#endif // SELFBODY_H
