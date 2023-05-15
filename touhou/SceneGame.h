
#ifndef SCENEGAME_H
#define SCENEGAME_H

#include "QGPIForeGround.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QWidget>


class SceneGame : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit SceneGame(QObject *parent = nullptr);
    void init();
private:
    QGPIForeGround* foreground;
    bool IsRun;
    QTimer timecounter;
};

#endif // SCENEGAME_H
