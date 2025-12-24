#include "Boss.h"

Boss::Boss(const std::string& name, const Stats& stats)
    : Enemy(name, stats) {}

void Boss::takeTurn(Entity& target) {
    if (!phaseTwo && stats.hp < stats.maxHP / 2) {
        phaseTwo = true;
        // Boss second phase
    }

    int damage = stats.attack;
    if (phaseTwo) {
        damage += 5;
    }

    target.takeDamage(damage);
}
