
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
};

#endif // SELFBODY_H
