#include "Armor.h"
#include <string>

Armor::Armor(const std::string& name, int weight, int setArmor) 
	: Item("Armor", weight),  defense(setArmor) {};


void Armor::use() {
	std::cout << "Armor with defense " << defense << " is equipped" << std::endl;
}
