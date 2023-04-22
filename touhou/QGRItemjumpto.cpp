#include "QGraphicsView"
#include "QGRItemjumpto.h"

QStackedWidget* QGRItemJumpTo::stackedWidget;//静态成员的定义

QGRItemJumpTo::QGRItemJumpTo(){

}

void QGRItemJumpTo::JumpTo(int target){
    stackedWidget->setCurrentIndex(target);
    /*target:   0 初始界面
                1 游戏界面
                2 暂停界面
                3 死亡界面
                4 结算界面
                5 音乐室
                6 弹幕设计室 */
}

