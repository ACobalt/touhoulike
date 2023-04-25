
#ifndef SCENEINITIAL_H
#define SCENEINITIAL_H

#include "QGRItemjumpto.h"
#include <QGraphicsScene>



class SceneInitial : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit SceneInitial(QObject *parent = nullptr);
    QGRItemJumpTo* StartGame;
    QGRItemJumpTo* Exit;
};

#endif // SCENEINITIAL_H
