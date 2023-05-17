
#include "EnemyBody.h"

EnemyBody::EnemyBody()
{
    setPixmap(QPixmap(":/pictures/Pictures/enemy.png"));
}

//根据计时器场景自动推进,敌机的反应
void EnemyBody::advance(int phase){
    if(!phase)
        return;
    DoCollision();
    if(HP<=0){
        Clear();
        return;
    }
    if(x()<-1||y()<-14||x()>417||y()>466){
        Clear();
        return;
    }
}

//碰撞检测
void EnemyBody::DoCollision(){
    if(!collidingItems().isEmpty()){
        HP=HP-1;
        QList<QGraphicsItem *> list = collidingItems() ;

        foreach(QGraphicsItem * i , list)
        {
            i->setVisible(false);
        }
    }
}

void EnemyBody::Clear(){
    delete this;
}

void EnemyBody::setHP(int hp){
    HP=hp;
}
