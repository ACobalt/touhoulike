
#include "SceneInitial.h"

SceneInitial::SceneInitial(QObject *parent)
    : QGraphicsScene{parent}
{
    StartGame=new QGRItemJumpTo();
    StartGame->setPixmap(QPixmap(":/pictures/Pictures/transparent.png"));
    StartGame->SetTarget(1);
    addItem(StartGame);
    setFocus();
    setFocusItem(StartGame);
}

