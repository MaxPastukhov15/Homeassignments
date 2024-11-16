// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include "transformer.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

Transformer::Transformer(const std::string& name,int lvl, int str, int fl, int am, Weapon* wpn) 
	: name(name),level(lvl),strength(str),ammo(am),weapon(wpn),fuelTank(fl) {}

Transformer::~Transformer() {}

int Transformer::getLevel() const { return level;}
int Transformer::getStrength() const { return strength; }
int Transformer::getFuel() const {return fuelTank.getFuelAmount();}
int Transformer::getAmmo() const {return ammo;}

void Transformer::move(){ 
	if(fuelTank.getFuelAmount() >0) {
		fuelTank.consume();
	}
}
void Transformer::fire(){
	if (ammo>0) {
		ammo--;
		fuelTank.consume();
	}
}
void Transformer::transform(){
	std::cout<< "Transformer " << name  <<  " is transforming" << '\n';
}
void  Transformer::openFire(){
	std::cout<< "Trnasformer " << name <<  " opened fire" << '\n';
}
void Transformer::ulta(){
	std::cout<< "Transformer " << name <<  " used ulta" << '\n';
	
}
