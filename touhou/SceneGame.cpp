
#include "SceneGame.h"

SceneGame::SceneGame(QObject *parent)
    : QGraphicsScene{parent}
{
    //添加前景
    foreground= new QGPIForeGround;
    foreground->setPixmap(QPixmap(":/pictures/Pictures/gameforeground.png"));
    addItem(foreground);

    //游戏运转
    IsRun=true;

    //添加自机
    aya = new SelfBody;
    addItem(aya);
    setFocusItem(aya);
}

