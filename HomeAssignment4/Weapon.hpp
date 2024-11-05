// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef WEAPON_HPP

#define WEAPON_HPP

#include <iostream>

class Weapon {

private:

    int damage;

public:

    Weapon(int dmg = 10) : damage(dmg) {}

    int getDamage() const { return damage; }

    void setDamage(int dmg) { damage = dmg; }

    friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {

        os << "Weapon damage: " << weapon.damage;

        return os;

    }

    	bool operator>(const Weapon& other) const { return damage > other.damage; }
	bool operator<(const Weapon& other) const { return damage < other.damage; }
	bool operator==(const Weapon& other) const { return damage == other.damage; }

};

#endif
 
