// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP
#include "transformer.hpp"
class Autobot : public Transformer {
private:
   int repairPower;
public:
   Autobot(int lvl = 1, int str = 10, int am = 5, int fuelCapacity = 100, Weapon* wpn = nullptr, int repair = 10);
   void repair();
   void transform() override;
   friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
   bool operator>(const Autobot& other) const;
   bool operator<(const Autobot& other) const;
   bool operator==(const Autobot& other) const;
};
#endif









