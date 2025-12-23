#pragma once
#include "Item.h"

class Armor : public Item {
private:
    std::string name;
    int defense;

public:
    Armor(std::string name, int defense);

    int getDefense() const;
    std::string getName() const override;
    void use(Player& player) override;
};

#ifndef ARMOR_H
#define ARMOR_H

#endif //ARMOR_H
