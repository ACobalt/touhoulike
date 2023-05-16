
#include "SelfBody.h"
#include <QKeyEvent>

SelfBody::SelfBody()
{
    //设置初始自机位置
    setX(207);
    setY(416);
    setFlag(QGraphicsItem::ItemIsFocusable);
    //绑定定时器
    up=new QTimer(this);
    down=new QTimer(this);
    left=new QTimer(this);
    right=new QTimer(this);
    shot=new QTimer(this);
    connect(up,SIGNAL(timeout()),this,SLOT(moveup()));
    connect(down,SIGNAL(timeout()),this,SLOT(movedown()));
    connect(left,SIGNAL(timeout()),this,SLOT(moveleft()));
    connect(right,SIGNAL(timeout()),this,SLOT(moveright()));
}

//根据计时器场景自动推进,自机的反应
void SelfBody::advance(int phase){
    if(!phase)
        return;
    DoCollision();
}
//碰撞检测
void SelfBody::DoCollision(){

}

void SelfBody::keyPressEvent(QKeyEvent* event){
    switch (event->key())
    {
//    case Qt::Key_Z:
//        shoot();
//        break;
//    case Qt::Key_X:
//        bomb();
//        break;
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

void SelfBody::keyReleaseEvent(QKeyEvent* event){
    switch (event->key())
    {
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
    }
}

//void SelfBody::shoot(){

//}

//void SelfBody::bomb(){

//}

QRectF SelfBody::boundingRect() const{
    qreal penWidth=1;
    return QRectF(0-penWidth/2,0-penWidth/2,32+penWidth,48+penWidth);
}

QPainterPath SelfBody::shape(){
    QPainterPath path;
    path.addEllipse(QRect(13,21,6,6));
    return path;
}

void SelfBody::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget){
    painter->drawPixmap(0,0,QPixmap(":/pictures/Pictures/ayaself.png"));
}

void SelfBody::moveup(){
    if(y()>15){
        moveBy(0,-1);
    }
}

void SelfBody::movedown(){
    if(y()<418){
        moveBy(0,1);
    }
}

void SelfBody::moveleft(){
    if(x()>28){
        moveBy(-1,0);
    }
}

void SelfBody::moveright(){
    if(x()<385){
        moveBy(1,0);
    }
}
