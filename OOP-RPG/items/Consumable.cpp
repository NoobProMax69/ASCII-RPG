#include "Consumable.h"
#include "../entities/Player.h"

Consumable::Consumable(const std::string& name, int healAmount)
    : name(name), healAmount(healAmount) {}


std::string Consumable::getName() const {
    return name;
}

void Consumable::use(Player& player) {
    player.heal(healAmount);
}
