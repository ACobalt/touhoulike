
#include "UIgame.h"

GameUi::GameUi()
{
    //背景和视图设置
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setBackgroundBrush(QBrush(Qt::NoBrush));
    setStyleSheet("GameUi{"
                  " background-image: url(:/pictures/Pictures/gamebackground.png);"
                  " background-repeat: no-repeat;"
                  "}");
}

