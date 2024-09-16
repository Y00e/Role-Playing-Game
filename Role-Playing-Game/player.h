#pragma once
#include <vector>
#include <string>
//#include "item"

class Player {
	private:
		std::string name;
		std::vector<item*> inventory;

	public:
		Player(std::string name, std::vector<Item*>) {};
		//void addItem(Item* item) {};
		void displayInventory() const {};
		void useItem(int index) {};
		void removeItem(int index) {};
		std::string getName() const {};
};