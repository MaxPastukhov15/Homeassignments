// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef PREDATORCON_HPP
#define PREDATORCON_HPP

#include "transformer.hpp"

class Predacon: public Transformer {//heir
private:
	int energy;//field
public:
	Predacon(int lvl, int str, int fl, int am, Weapon* wpn,int en);//construktor
	
	//methods
	int getEnergy() const;
	void setEnergy(int en);
	
	//functions 
	void hunt();
	void transform() override;// redefine from class Transformer
};
#endif
