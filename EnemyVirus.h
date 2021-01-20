#ifndef ENEMY_H
#define ENEMY_H
#include "GameObj.h"

class EnemyVirus:public GameObj
{
    Q_OBJECT

public:
    EnemyVirus();
    EnemyVirus(double x, double y, double speed);
    ~EnemyVirus();
private:
    double moveSpeed;
public slots:
    void move();
    void spawnPowerUp(int totalKills);
};

#endif // ENEMY_H
