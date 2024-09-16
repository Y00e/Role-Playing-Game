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
	Item(const std::string& name, int weight);
	std::string getName() const;
};

