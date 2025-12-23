#include "CombatSystem.h"

void CombatSystem::playerAttack(Entity& attacker, Entity& target, int attackPower) {
    int damage = attackPower - target.getStats().defense;
    if (damage < 1) damage = 1;

    target.takeDamage(damage);
}
