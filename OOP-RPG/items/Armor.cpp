#include "Armor.h"

Armor::Armor(const std::string name, int defense)
    : name(name), defense(defense) {}

int Armor::getDefense() const {
    return defense;
}

std::string Armor::getName() const {
    return name;
}

void Armor::use(Player& player) {
    //equipped elsewhere
}
