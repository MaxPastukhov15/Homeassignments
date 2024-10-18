// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include "Weapon.hpp"

Weapon::Weapon(int dmg) : damage(dmg){}

int Weapon::getDamage() const {
    return damage;
}
