
#include "SelfBody.h"
#include <QKeyEvent>

SelfBody::SelfBody()
{
    //设置初始自机位置
    setX(207);
    setY(416);
    setFlag(QGraphicsItem::ItemIsFocusable);
}

//根据计时器场景自动推进,自机的反应
void SelfBody::advance(int phase){
    if(!phase)
        return;
    DoCollision();
}

void SelfBody::DoCollision(){

}

void SelfBody::keyPressEvent(QKeyEvent* event){
    switch (event->key())
    {
    case Qt::Key_Z:
        shoot();
        break;
    case Qt::Key_X:
        bomb();
        break;
    case Qt::Key_Up:

        break;
    case Qt::Key_Down:

        break;
    case Qt::Key_Right:

        break;
    case Qt::Key_Left:

        break;
    default:
        break;
    }
}

void SelfBody::shoot(){

}

void SelfBody::bomb(){

}

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