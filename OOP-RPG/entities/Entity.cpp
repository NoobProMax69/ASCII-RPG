#include "Entity.h"

Entity::Entity(const std::string &name, const Stats &stats) : name(name), stats(stats) {}

void Entity::takeDamage(int amount) {
    stats.hp -= amount;
}

bool Entity::isAlive() const {
    return stats.hp > 0;
}

const std::string& Entity::getName() const {
    return name;
}

const Stats& Entity::getStats() const {
    return stats;
}
