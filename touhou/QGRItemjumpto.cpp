#include "QGraphicsView"
#include "QGRItemjumpto.h"

QGRItemJumpTo::QGRItemJumpTo(){

}

void QGRItemJumpTo::JumpTo(int target){
    w->setCurrentIndex(target);//markmarkmark
    /*target:   0 初始界面
                1 游戏界面
                2 暂停界面
                3 死亡界面
                4 结算界面
                5 音乐室
                6 弹幕设计室 */
}

