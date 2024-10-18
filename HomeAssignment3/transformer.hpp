// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef TRANSFORMER_HPP
#define TRANSFORMER_HPP
#include "Weapon.hpp"
#include "FuelTank.hpp"


class Transformer{
protected:
	//fields
      int level;
      int strength;
      int ammo;
      Weapon* weapon;// Association
      FuelTank fuelTank;//Composition
public:
      Transformer(int lvl,int str, int fl,int am,Weapon* wpn);//Construktor
      virtual ~Transformer();// Virtual Destruktor
    //get methods
    int getLevel() const;
    int getStrength() const;
    int getFuel() const;
    int getAmmo() const;
    //Define functions
    void move();
    void fire();
    virtual void transform();// Virtual method with purpose  to be overdriven
};
#endif
