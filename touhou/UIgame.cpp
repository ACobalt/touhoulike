
#include "UIgame.h"

GameUi::GameUi()
{
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setBackgroundBrush(QBrush(Qt::NoBrush));
    setStyleSheet("GameUi{"
                  " background-image: url(:/pictures/Pictures/gamebackground.png);"
                  " background-repeat: no-repeat;"
                  "}");
}

