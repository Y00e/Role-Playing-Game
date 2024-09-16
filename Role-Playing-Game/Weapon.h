#pragma once
#include "Item.h"
class Weapon : public Item
{
private:
	int damage;
	double range;

public:
	Weapon( const std::string& name, int weight, int damage, double range) 
		: Item(name, weight),  damage(damage), range(range) {}
	
	void use();

};

