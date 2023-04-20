
#include "startui.h"

StartUi::StartUi(){
    scene = new QGraphicsScene;
    this->setScene(scene);
    pages = new QStackedWidget;//用setCurrentIndex(0到4)设置显示的界面
    gui_1 = new GameUi;
    pui_2 = new PauseUi;
    dui_3 = new DeathUi;
    sui_4 = new SettleUi;
    pages->addWidget(gui_1);
    pages->addWidget(pui_2);
    pages->addWidget(dui_3);
    pages->addWidget(sui_4);
}

StartUi::~StartUi(){
    delete gui_1;
    delete pui_2;
    delete dui_3;
    delete sui_4;
    delete pages;
    delete scene;
}
