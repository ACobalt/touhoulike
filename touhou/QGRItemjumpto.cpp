#include "QGraphicsView"
#include "QGRItemjumpto.h"
#include "SceneGame.h"
#include <QKeyEvent>

QStackedWidget* QGRItemJumpTo::stackedWidget;//静态成员的定义
GameUi* QGRItemJumpTo::gui;

QGRItemJumpTo::QGRItemJumpTo(){
    setFlag(QGraphicsItem::ItemIsFocusable);
    //默认构造函数
}

void QGRItemJumpTo::JumpTo(){
    SceneGame* sceneGame;
    sceneGame=new SceneGame;
    gui->setScene(sceneGame);
    stackedWidget->setCurrentIndex(target);//跳转功能的实现
}

void QGRItemJumpTo::keyPressEvent(QKeyEvent* event){//按下enter键Z键执行跳转功能
    switch (event->key())
    {
    case Qt::Key_Enter:
        JumpTo();
        break;
    case Qt::Key_Z:
        JumpTo();
        break;
    case Qt::Key_Return:
        JumpTo();
        break;
    default:
        break;
    }
}

void QGRItemJumpTo::SetTarget(int tar){
    target=tar;//设置跳转按钮的目标
}
