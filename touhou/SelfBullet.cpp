
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
    DoCollision();
    moveBy(0,-10);
    Clear();
}

void SelfBullet::DoCollision(){

}

void SelfBullet::Clear(){
    if(y()<17)
        delete this;
}

