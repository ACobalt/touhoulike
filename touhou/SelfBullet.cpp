
#include "SelfBullet.h"
#include <QBrush>

SelfBullet::SelfBullet()
{
    setRect(0,0,5,5);
    setBrush(QPixmap(":/pictures/Pictures/yellow.png"));
}

void SelfBullet::advance(int phase){
    if(!phase)
        return;
    moveBy(0,-10);
    if(y()<17){
        Clear();
        return;
    }
}

void SelfBullet::DoCollision(){
    if(!collidingItems().isEmpty()){

    }
}

void SelfBullet::Clear(){
    delete this;
}

