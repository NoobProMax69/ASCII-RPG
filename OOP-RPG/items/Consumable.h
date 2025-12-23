#pragma once
#include "Item.h"

class Consumable : public Item {
private:
    std::string name;
    int healAmount;

public:
    Consumable(std::string& name, int healAmount);

    std::string getName() const override;
    void use(Player& player) override;
};

#ifndef CONSUMABLE_H
#define CONSUMABLE_H

#endif //CONSUMABLE_H
