#pragma once
#include <iostream>
#include <string>

class Item
{
private:
	std::string name;
	int weight;
public:
	virtual void use() = 0;
	virtual  ~Item();
};

