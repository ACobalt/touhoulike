#include "EnemyBullet.h"
#include <QPainter>

EnemyBullet::EnemyBullet()
{

}

//根据计时器场景自动推进,敌弹的反应
void EnemyBullet::advance(int phase){
    if(!phase)
        return;
    if(x()<23||y()<10||x()>412||y()>461){
        Clear();
        return;
    }
}



void EnemyBullet::Clear(){
    delete this;
}

QRectF EnemyBullet::boundingRect() const{
    qreal penWidth=1;
    return QRectF(0-penWidth/2,0-penWidth/2,10+penWidth,10+penWidth);
}

QPainterPath EnemyBullet::shape() const{
    QPainterPath path;
    path.addEllipse(QRect(0,0,10,10));
    return path;
}

void EnemyBullet::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget){
    Q_UNUSED(option)
    Q_UNUSED(widget)
    painter->drawPixmap(0,0,QPixmap(":/pictures/Pictures/red.png"));
}
