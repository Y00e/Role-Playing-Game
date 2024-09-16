#include "player.h"
#include <vector>
#include <string>

Player::Player(std::string name, std::vector<Item*> inventory) : name(name), inventory(inventory) {
};


//void Player::addItem(Item* item) {
// 
// };

void Player::displayInventory() const {
	for (auto* item:inventory) {

	}
	std::count << 
};

void Player::useItem(int index) {

};

void Player::removeItem(int index) {

};

std::string Player::getName() const {
	return name;
};
