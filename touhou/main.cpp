#include "UIformal.h"
#include "UIgame.h"
#include <QStackedWidget>
#include <QApplication>

int main(int argc,char* argv[]){
    QApplication a(argc,argv);

    //生成各个界面Ui的View
    FormalUi* init_0;//进入游戏初始界面
    GameUi* gui_1;//游戏运行的界面
    FormalUi* pui_2;//游戏暂停的界面
    FormalUi* dui_3;//游戏死亡的界面
    FormalUi* sui_4;//游戏结算的界面
    FormalUi* musicroom_5;//音乐室
    FormalUi* danmakudesign_6;//弹幕设计规划
    init_0 = new FormalUi;
    gui_1 = new GameUi;
    pui_2 = new FormalUi;
    dui_3 = new FormalUi;
    sui_4 = new FormalUi;
    musicroom_5 = new FormalUi;
    danmakudesign_6 = new FormalUi;

    //生成页面栈,把各个界面加进去
    QStackedWidget* w;
    w = new QStackedWidget;
    w->addWidget(init_0);
    w->addWidget(gui_1);
    w->addWidget(pui_2);
    w->addWidget(dui_3);
    w->addWidget(sui_4);
    w->addWidget(musicroom_5);
    w->addWidget(danmakudesign_6);

    //初始化页面并展示
    w->setCurrentWidget(0);
    w->showFullScreen();

    return a.exec();
}
