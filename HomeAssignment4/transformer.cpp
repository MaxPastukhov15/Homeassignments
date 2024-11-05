// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include "transformer.hpp"

#include "Weapon.hpp"

Transformer::Transformer(int lvl, int str, int am, int fuelCapacity, Weapon* wpn)

    : level(lvl), strength(str), ammo(am), fuelTank(fuelCapacity), weapon(wpn) {}


Transformer::~Transformer() {}

int Transformer::getLevel() const { return level; }

int Transformer::getStrength() const { return strength; }

int Transformer::getAmmo() const { return ammo; }

int Transformer::getFuel() const { return fuelTank.getFuel(); }

void Transformer::setLevel(int lvl) { level = lvl; }

void Transformer::setStrength(int str) { strength = str; }

void Transformer::setAmmo(int am) { ammo = am; }

void Transformer::setFuel(int fuel) { fuelTank.setFuel(fuel); }

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {

    os << "Level: " << transformer.level << ", Strength: " << transformer.strength
<< ", Ammo: " << transformer.ammo << ", Fuel: " << transformer.getFuel();

    return os;

}

bool Transformer::operator>(const Transformer& other) const { return strength > other.strength; }

bool Transformer::operator<(const Transformer& other) const { return strength < other.strength; }

bool Transformer::operator==(const Transformer& other) const { return level == other.level && strength == other.strength; }

void Transformer::move() {

    if (fuelTank.getFuel() > 0) {

        fuelTank.consumeFuel(1);

    }

}

void Transformer::fire() {

    if (ammo > 0) {

        ammo--;

    }

}

void Transformer::transform() {}//method to be overdriven 
 
