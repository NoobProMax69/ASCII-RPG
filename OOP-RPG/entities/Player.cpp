#include "Player.h"
#include "../items/Weapon.h"

Player::Player(const std::string& name, const Stats& stats)
    : Entity(name, stats) {}

void Player::equipWeapon(Weapon* weapon) {
    equippedWeapon = weapon;
}

int Player::getAttackDamage() const {
    int base = stats.attack;
    if (equippedWeapon) {
        base += equippedWeapon->getDamage();
    }
    return base;
}

void Player::heal(int amount) {
    stats.hp += amount;
    if (stats.hp > stats.maxHP) {
        stats.hp = stats.maxHP;
    }
}
