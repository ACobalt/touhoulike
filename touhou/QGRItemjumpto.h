
#ifndef QGRITEMJUMPTO_H
#define QGRITEMJUMPTO_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsView>

class QGRItemJumpTo : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    QGRItemJumpTo();
    void JumpTo(int target);//利用页面编号跳转
};

#endif // QGRITEMJUMPTO_H
