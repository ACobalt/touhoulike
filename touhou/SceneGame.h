
#ifndef SCENEGAME_H
#define SCENEGAME_H

#include "QGPIForeGround.h"
#include "SelfBody.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QWidget>


class SceneGame : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit SceneGame(QObject *parent = nullptr);
    void init();
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);
private:
    SelfBody* aya;
    QGPIForeGround* foreground;
    bool IsRun;
    QTimer* timecounter;
    QTimer* shoottimer;
    QTimer* up;
    QTimer* down;
    QTimer* left;
    QTimer* right;
    QTimer* advancetimer;
private slots:
    void shoot();
    void moveup();
    void movedown();
    void moveleft();
    void moveright();
};

#endif // SCENEGAME_H
