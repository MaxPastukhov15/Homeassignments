// Maksim Pastukhov B82 mail: st131119@student.spbu.ru

#include <vector>
#include <memory>
#include <string>

#include "Autobot.hpp"
#include "Decepticon.hpp"
#include "transformer.hpp"

int main(){
	// Explicitly testing Autobot and Decepticon classes
	Autobot  Optimus("A1",1,10,50,20,new Weapon(10),5);
	Optimus.transform();
	Optimus.openFire();
	Optimus.ulta();
	
	Decepticon  Megatron("D2",2,15,60,30,new Weapon(15),true);
	Megatron.transform();
	Megatron.openFire();
	Megatron.ulta();
	// Creating Transformer pointers to Autobot and Decepticon objects
	Transformer* ptrAutobot=new Autobot("Autobot o5",3,12,18,21,new Weapon(24),30);

	Transformer* ptrDecepticon=new Decepticon("Decepticon y4",4,16,20,24,new Weapon(28),32);
	// Testing methods through Transformer pointers
	ptrAutobot->transform();
	ptrAutobot->openFire();
	ptrAutobot->ulta();
	
	ptrDecepticon->transform();
	ptrDecepticon->openFire();
	ptrDecepticon->ulta();
	
	
// Creating a vector of unique_ptr<Transformer> objects	
std::vector<std::unique_ptr<Transformer>> transformers;

// Adding objects of different types to the vector
transformers.push_back(std::make_unique<Autobot>("Au Genesis1",1,5,9,15,new Weapon(19),22));
transformers.push_back(std::make_unique<Decepticon>("De Meg2",8,11,14,17,new Weapon(20),23));
transformers.push_back(std::make_unique<Transformer>("Tr Scrapper5",3,1,13,22,new Weapon(2)));

// Adding more objects of different types to the vector
for (int i=0; i<2; ++i){
	transformers.push_back(std::make_unique<Autobot>("Bumblebee"+std::to_string(i+1),1+i,5-i,9+i*2,15+i*3,new Weapon(19),22+i*4));
	transformers.push_back(std::make_unique<Decepticon>("Megatron"+std::to_string(i+2),8+i*8,11+i*9,14+i*2,17+i*3,new Weapon(20),23+i*7));
	transformers.push_back(std::make_unique<Transformer>("Tr Optimus Prime"+std::to_string(i+3),3+i*9,1+i,13+i+5,22+6*i,new Weapon(2)));
}
// Vector now contains 9 objects of different types (3 Transformer, 3 Autobot, 3 Decepticon)

	// Testing methods through Transformer pointers in the vector
	for (const auto& transformer : transformers){
		transformer->transform();
		transformer->openFire();
		transformer->ulta();
	}
	// Deleting dynamically allocated objects
	delete ptrAutobot;
	delete ptrDecepticon;
	return 0;
}
	

