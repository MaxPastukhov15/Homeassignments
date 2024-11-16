// Maksim Pastukhov B82 mail: st131119@student.spbu.ru
#ifndef FUELTANK_HPP
#define FUELTANK_HPP

class FuelTank {
private:
	int fuelAmount;
public:
	FuelTank(int amount) : fuelAmount(amount){}
	void consume() {if (fuelAmount >0){
		fuelAmount--;
		}
	}
	int getFuelAmount() const {return fuelAmount; } 
	
};
#endif
