
#ifndef QGRITEMJUMPTO_H
#define QGRITEMJUMPTO_H

#include <QStackedWidget>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsView>

class QGRItemJumpTo : public QObject,public QGraphicsRectItem
{
    Q_OBJECT

public:
    static QStackedWidget* stackedWidget;//给所有按键绑定页面栈
private:
    int target;//设置跳转到的目标
    /*target:   0 初始界面
                1 游戏界面
                2 暂停界面
                3 死亡界面
                4 结算界面
                5 音乐室
                6 弹幕设计室 */
protected:
    void keyPressEvent(QKeyEvent* event);
public:
    QGRItemJumpTo();
    QGRItemJumpTo(qreal x, qreal y, qreal width, qreal height);
    void JumpTo();//利用页面编号跳转
    void SetTarget(int tar);//设置跳转的目标
};

#endif // QGRITEMJUMPTO_H
