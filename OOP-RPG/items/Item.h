#pragma once
#include <string>

class Player;

class Item {
    public:
    virtual ~Item() = default;
    virtual std::string getName() const = 0;
    virtual void use(Player& player) = 0;
};

#ifndef ITEM_H
#define ITEM_H

#endif //ITEM_H
