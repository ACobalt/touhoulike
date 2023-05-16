
#include "SceneGame.h"
#include "SelfBullet.h"
#include <QKeyEvent>

SceneGame::SceneGame(QObject *parent)
    : QGraphicsScene{parent}
{
    //添加前景
    foreground= new QGPIForeGround;
    foreground->setPixmap(QPixmap(":/pictures/Pictures/gameforeground.png"));
    addItem(foreground);

    //游戏运转
    IsRun=true;
    advancetimer=new QTimer;
    connect(advancetimer,SIGNAL(timeout()),this,SLOT(advance()));
    advancetimer->start(5);

    //添加自机
    aya = new SelfBody;
    addItem(aya);
    setFocusItem(aya);

    //添加自弹计时器
    shoottimer = new QTimer;
    connect(shoottimer,SIGNAL(timeout()),this,SLOT(shoot()));
    //绑定定时器
    up=new QTimer(this);
    down=new QTimer(this);
    left=new QTimer(this);
    right=new QTimer(this);
    connect(up,SIGNAL(timeout()),this,SLOT(moveup()));
    connect(down,SIGNAL(timeout()),this,SLOT(movedown()));
    connect(left,SIGNAL(timeout()),this,SLOT(moveleft()));
    connect(right,SIGNAL(timeout()),this,SLOT(moveright()));
}

void SceneGame::shoot(){
    SelfBullet* bullet1;
    SelfBullet* bullet2;
    bullet1= new SelfBullet;
    bullet1->setX(aya->x()+11);
    bullet1->setY(aya->y()-5);
    bullet2= new SelfBullet;
    bullet2->setX(aya->x()+21);
    bullet2->setY(aya->y()-5);
    addItem(bullet1);
    addItem(bullet2);
}

void SceneGame::keyPressEvent(QKeyEvent* event){
    switch (event->key())
    {
    case Qt::Key_Z:
        shoottimer->start(8);
        break;
    case Qt::Key_Up:
        up->start(8);
        break;
    case Qt::Key_Down:
        down->start(8);
        break;
    case Qt::Key_Right:
        right->start(8);
        break;
    case Qt::Key_Left:
        left->start(8);
        break;
    default:
        break;
    }
}

void SceneGame::keyReleaseEvent(QKeyEvent* event){
    switch (event->key())
    {
    case Qt::Key_Z:
        shoottimer->stop();
        break;
    case Qt::Key_Up:
        up->stop();
        break;
    case Qt::Key_Down:
        down->stop();
        break;
    case Qt::Key_Right:
        right->stop();
        break;
    case Qt::Key_Left:
        left->stop();
        break;
    default:
        break;
    }
}

void SceneGame::moveup(){
    if(aya->y()>15){
        aya->moveBy(0,-1);
    }
}

void SceneGame::movedown(){
    if(aya->y()<418){
        aya->moveBy(0,1);
    }
}

void SceneGame::moveleft(){
    if(aya->x()>28){
        aya->moveBy(-1,0);
    }
}

void SceneGame::moveright(){
    if(aya->x()<385){
        aya->moveBy(1,0);
    }
}
