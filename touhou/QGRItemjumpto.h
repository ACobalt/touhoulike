
#ifndef QGRITEMJUMPTO_H
#define QGRITEMJUMPTO_H

#include "UIgame.h"
#include <QGraphicsItem>
#include <QStackedWidget>
#include <QObject>
#include <QGraphicsView>

class QGRItemJumpTo : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    static QStackedWidget* stackedWidget;//给所有按键绑定页面栈
    static GameUi* gui;//给所有按键绑定gui
private:
    int target;//设置跳转到的目标
    /*target:   0 初始界面
                1 游戏界面*/
protected:
    void keyPressEvent(QKeyEvent* event);
public:
    QGRItemJumpTo();
    void JumpTo();//利用页面编号跳转
    void SetTarget(int tar);//设置跳转的目标
};

#endif // QGRITEMJUMPTO_H
