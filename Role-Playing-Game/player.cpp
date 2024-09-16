#include "player.h"
#include <vector>
#include <string>
#include "Item.h"

Player::Player(std::string name, std::vector<Item*> inventory) : name(name), inventory(inventory) {
};


void Player::addItem(Item* item) {
		inventory.push_back(item);
};

void Player::displayInventory() const {
    for (size_t i = 0; i < inventory.size(); ++i) { //using size_t instead of int, because of less risk for bugs than int
        std::cout << "Index " << i << ": " << inventory[i]->getName() << std::endl;
    }
}

void Player::useItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory[index]->use();
    }
    else {
        std::cerr << "Index out of bounds" << std::endl;
    }
};

void Player::removeItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory.erase(inventory.begin() + index);
    }
    else {
        std::cerr << "Index out of bounds" << std::endl;
    }
}

std::string Player::getName() const {
	return name;
};
