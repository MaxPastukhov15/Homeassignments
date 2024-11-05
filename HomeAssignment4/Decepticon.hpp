// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP
#include "transformer.hpp"
class Decepticon : public Transformer {
private:
   bool canFly;
public:
   Decepticon(int lvl = 1, int str = 10, int am = 5, int fuelCapacity = 100, Weapon* wpn = nullptr, bool fly = false);
   bool getCanFly() const;
   void setCanFly(bool fly);
   void sabotage();
   void transform() override;
   friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
};
#endif
