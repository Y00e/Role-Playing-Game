#pragma once
#include <vector>
#include <string>
#include "Item.h"

class Player {
	private:
		std::string name;
		std::vector<Item*> inventory;

	public:
		Player(std::string name);
		void addItem(Item* item);
		void displayInventory() const;
		void useItem(int index);
		void removeItem(int index);
		std::string getName() const;
};