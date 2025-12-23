#pragma once
#include "Entity.h"
#include <vector>

class Weapon;

class Player : public Entity {
private:
    Weapon* equippedWeapon = nullptr;

public:
    Player(const std::string& name, const Stats& stats);

    void equipWeapon(Weapon* weapon);
    int getAttackDamage() const;

    void heal(int amount);
};
