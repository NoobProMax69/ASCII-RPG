#pragma once
#include "Entity.h"

class Enemy : public Entity {
public:
    Enemy(const std::string& name, const Stats& stats);
    virtual void takeTurn(Entity& target) = 0;
};

#ifndef ENEMY_H
#define ENEMY_H

#endif //ENEMY_H
