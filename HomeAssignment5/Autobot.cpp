// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#include "Autobot.hpp"
#include <iostream>
#include <string> 


Autobot::Autobot(const std::string& name, int lvl, int str, int fl, int am, Weapon* wpn, int repair)
    : Transformer(name, lvl, str, fl, am, wpn), repairPower(repair), name(name) {}
void Autobot::repair(){
	std::cout << "Repairing  with power: " << repairPower << '\n';
}

void Autobot::transform(){
	std::cout<< "Autobot " << name << " is trnasforming" << '\n';
}
void Autobot::openFire(){
	std::cout << "Autobot " << name << " opened fire" << '\n';
}
void Autobot::ulta(){
	std::cout << "Autobot " << name << " used ulta" << '\n';
}











