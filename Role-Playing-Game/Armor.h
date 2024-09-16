#pragma once
#include "Item.h"
class Armor : public Item
{
public:
	Armor(const std::string& name, int weight, int setDefense);
	void use() override;
	


private:
	int defense;

};

