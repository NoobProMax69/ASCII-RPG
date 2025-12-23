#pragma once
#include "Item.h"
#include "../combat/DamageType.h"

class Weapon: public Item {
private:
    std::string name;
    int damage;
    DamageType type;

public:
    Weapon(const std::string& name, int damage, DamageType type);
    int getDamage() const;
    DamageType getDamageType() const;

    std::string getName() const override;
    void use(Player& player) override;
};

#ifndef WEAPON_H
#define WEAPON_H

#endif //WEAPON_H
