
#ifndef STARTUI_H
#define STARTUI_H

#include "deathui.h"
#include "gameui.h"
#include "pauseui.h"
#include "settleui.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <QStackedWidget>


class StartUi : public QGraphicsView
{
    Q_OBJECT
public:
    StartUi();
    ~StartUi();
private:
    QGraphicsScene* scene;//和开始界面绑定的场景
    QStackedWidget* pages;//转换界面的容器
    GameUi* gui_1;//游戏运行的界面
    PauseUi* pui_2;//游戏暂停的界面
    DeathUi* dui_3;//游戏死亡的界面
    SettleUi* sui_4;//游戏结算的界面
};

#endif // STARTUI_H
