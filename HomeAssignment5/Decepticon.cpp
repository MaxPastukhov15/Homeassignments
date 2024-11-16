// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#include "Decepticon.hpp"
#include <iostream>
#include <string> 

Decepticon::Decepticon(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, bool fly)
    : Transformer(name, lvl, str, fl, am, wpn), canFly(fly), name(name) {}

    
bool Decepticon::getCanFly() const{
     return canFly;
}

void Decepticon::setCanFly(bool fly){
     canFly = fly;
}

void Decepticon::sabotage(){
    std::cout << "Sabotaging autobots" << '\n';
}

void Decepticon::transform(){
   std::cout<< "Decepticon " << name << " is transforming" << '\n';
}
void Decepticon::openFire(){
	std::cout<< "Decepticon " << name << " opened fire" << '\n';
}
void Decepticon::ulta(){
	std::cout << "Autobot " << name << " used ulta" << '\n';
}

