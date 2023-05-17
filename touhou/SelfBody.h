
#ifndef SELFBODY_H
#define SELFBODY_H

#include <QTimer>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsView>

class SelfBody : public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
public:
    bool IsRun;
    SelfBody();
    void advance(int phase);
    void DoCollision();
    QRectF boundingRect()  const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    QPainterPath shape() const;
};

#endif // SELFBODY_H
