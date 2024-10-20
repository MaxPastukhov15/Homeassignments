// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#include "Predatorcon.hpp"
#include <iostream>

Predacon::Predacon(int lvl,int str,int fl,int am,Weapon* wpn,int en) : Transformer(lvl,str,fl,am,wpn),energy(en) {}

int Predacon::getEnergy() const {
	return energy;
}

void Predacon::setEnergy(int en){
	energy=en;
}

void Predacon::hunt(){
	std::cout<< "Predacon is hunting" << '\n';
}

void Predacon::transform(){
	std::cout<< "Predacon is trnasforming" << '\n';
}
