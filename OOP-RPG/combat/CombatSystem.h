#pragma once
#include "../entities/Entity.h"

class CombatSystem {
public:
    static void playerAttack(Entity& attacker, Entity& target, int attackPower);
};


#ifndef COMBATSYSTEM_H
#define COMBATSYSTEM_H

#endif //COMBATSYSTEM_H
