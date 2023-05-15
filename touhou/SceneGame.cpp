
#include "SceneGame.h"

SceneGame::SceneGame(QObject *parent)
    : QGraphicsScene{parent}
{
    foreground= new QGPIForeGround;
    foreground->setPixmap(QPixmap(":/pictures/Pictures/gameforeground.png"));
    addItem(foreground);
    IsRun=true;
}

