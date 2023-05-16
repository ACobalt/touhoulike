
#ifndef SELFBODY_H
#define SELFBODY_H

#include <QTimer>
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
    void keyReleaseEvent(QKeyEvent* event);
    void bomb();
    QRectF boundingRect()  const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    QPainterPath shape();
    QTimer* up;
    QTimer* down;
    QTimer* left;
    QTimer* right;
    QTimer* shot;
private slots:
    void moveup();
    void movedown();
    void moveleft();
    void moveright();
//    void shoot();
};

#endif // SELFBODY_H
