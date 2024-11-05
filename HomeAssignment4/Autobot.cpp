// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#include "Autobot.hpp"
#include <iostream>
Autobot::Autobot(int lvl, int str, int am, int fuelCapacity, Weapon* wpn, int repair)
   : Transformer(lvl, str, am, fuelCapacity, wpn), repairPower(repair) {}
void Autobot::repair() {
   std::cout << "Repairing with power: " << repairPower << '\n';
}
void Autobot::transform() {
   std::cout << "Autobot is transforming" << '\n';
}
std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
   os << static_cast<const Transformer&>(autobot) << ", Repair Power: " << autobot.repairPower;
   return os;
}
bool Autobot::operator>(const Autobot& other) const { return repairPower > other.repairPower; }
bool Autobot::operator<(const Autobot& other) const { return repairPower < other.repairPower; }
bool Autobot::operator==(const Autobot& other) const { return repairPower == other.repairPower; }










