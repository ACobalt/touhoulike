#include "SceneInitial.h"
#include "UIformal.h"
#include "UIgame.h"
#include "QGRItemjumpto.h"
#include <QStackedWidget>
#include <QApplication>

int main(int argc,char* argv[]){
    QApplication a(argc,argv);

    //生成各个界面Ui的View
    FormalUi* init_0;//进入游戏初始界面
    GameUi* gui_1;//游戏运行的界面
    init_0 = new FormalUi;
    gui_1 = new GameUi;

    //静态成员变量的初始化
    QGRItemJumpTo::gui=gui_1;

    //生成各个界面Ui的Scene
    SceneInitial* sceneInitial;
    sceneInitial=new SceneInitial;
    //把各个Scene和View绑定
    init_0->setScene(sceneInitial);

    //生成页面栈,把各个界面加进去
    QStackedWidget* w;
    w = new QStackedWidget;
    w->addWidget(init_0);
    w->addWidget(gui_1);

    //静态成员变量的初始化
    QGRItemJumpTo::stackedWidget=w;

    //初始化页面并展示
    w->setCurrentIndex(0);
    w->show();

    return a.exec();
}
