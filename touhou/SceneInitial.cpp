
#include "SceneInitial.h"

SceneInitial::SceneInitial(QObject *parent)
    : QGraphicsScene{parent}
{
    StartGame=new QGRItemJumpTo(0,0,100,100);
    StartGame->SetTarget(1);
    setFocusItem(StartGame);
}

