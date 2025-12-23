#pragma once
#include "Enemy.h"

class Boss : public Enemy {
private:
    bool phaseTwo = false;

public:
    Boss(const std::string& name, const Stats& stats);

    void takeTurn(Entity& target) override;
};


#ifndef BOSS_H
#define BOSS_H

#endif //BOSS_H
