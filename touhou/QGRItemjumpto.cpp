#include "QGraphicsView"
#include "QGRItemjumpto.h"
#include <QKeyEvent>

QStackedWidget* QGRItemJumpTo::stackedWidget;//静态成员的定义

QGRItemJumpTo::QGRItemJumpTo(){
    //默认构造函数
}

QGRItemJumpTo::QGRItemJumpTo(qreal x, qreal y, qreal width, qreal height){
    QGraphicsRectItem(x, y, width, height);
}

void QGRItemJumpTo::JumpTo(){
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
    default:
        break;
    }
}

void QGRItemJumpTo::SetTarget(int tar){
    target=tar;//设置跳转按钮的目标
}
