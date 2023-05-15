
#include "UIformal.h"

FormalUi::FormalUi()
{
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(640,480);
    setBackgroundBrush(QBrush(Qt::NoBrush));
    setStyleSheet("FormalUi{"
                  " background-image: url(:/pictures/Pictures/title.png);"
                  " background-repeat: no-repeat;"
                  "}");
}

