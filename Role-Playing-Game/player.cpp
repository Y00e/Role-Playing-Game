#include "player.h"
#include <iostream>

Player::Player(std::string name) : name(name) {
    
};


void Player::addItem(Item* item) {
		inventory.push_back(item);
};

void Player::displayInventory() const {
    for (size_t i = 0; i < inventory.size(); ++i) { //using size_t instead of int, because of less risk for bugs than int
        std::cout << "Index " << i << ": " << inventory[i]->getName()<< "\n" << std::endl;
    }
}

void Player::useItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory[index]->use();
    }
    else {
        std::cout << "Invalid option.\n";
    }
};

void Player::removeItem(int index) {
    if (index >= 0 && index < inventory.size()) {
        inventory.erase(inventory.begin() + index);
    }
    else {
        std::cout << "Invalid option.\n";
    }
}

std::string Player::getName() const {
	return name;
};

////Kommentar
