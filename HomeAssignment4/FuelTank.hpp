// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef FUELTANK_HPP
#define FUELTANK_HPP
#include <iostream>
class FuelTank {
private:
   int fuel;
public:
   FuelTank(int capacity = 100) : fuel(capacity) {}
   int getFuel() const { return fuel; }
   void setFuel(int fuelAmount) { fuel = fuelAmount; }
   void consumeFuel(int amount) { if (fuel >= amount) fuel -= amount; }
   friend std::ostream& operator<<(std::ostream& os, const FuelTank& tank) {
       os << "Fuel capacity: " << tank.fuel;
       return os;
   }
   bool operator>(const FuelTank& other) const { return fuel > other.fuel; }
   bool operator<(const FuelTank& other) const { return fuel < other.fuel; }
   bool operator==(const FuelTank& other) const { return fuel == other.fuel; }
};
#endif
