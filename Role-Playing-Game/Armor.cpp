#include "Armor.h"
#include <string>

Armor::Armor(const std::string& name, int weight, int setArmor) 
	: Item(name, weight), defense(setArmor) {};


void Armor::use() {
	std::cout << getName() <<" with defense " << defense << " is equipped \n" << std::endl;
}

