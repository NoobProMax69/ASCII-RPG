#include "Weapon.h"

#include "Item.h"
#include "../entities/Player.h"

Weapon::Weapon(const std::string& name, int damage, DamageType type)
    : name(name), damage(damage), type(type) {}

int Weapon::getDamage() const {
    return damage;
}

std::string Weapon::getName() const {
    return name;
}

DamageType Weapon::getType() const {
    return type;
}

void Weapon::use(Player& player) {
    player.equipWeapon(this);
}
