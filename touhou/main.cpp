#include "startui.h"
#include <QApplication>

int main(int argc,char* argv[]){
    QApplication a(argc,argv);
    StartUi w;
    w.show();
    return a.exec();
}
