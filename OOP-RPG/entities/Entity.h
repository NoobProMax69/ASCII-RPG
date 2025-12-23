#pragma once
#include <string>
#include "Stats.h"

class Entity {
protected:
    std::string name;
    Stats stats;

public:
    Entity (const std::string& name, const Stats& stats);
    virtual ~Entity() = default;

    virtual void takeDamage(int amount);
    bool isAlive() const;

    const std::string& getName() const;
    const Stats& getStats() const;
};


#ifndef ENTITY_H
#define ENTITY_H

#endif //ENTITY_H
