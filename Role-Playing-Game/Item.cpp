#include "Item.h"
#include <string>

Item::Item(const std::string& name, int weight) : name(name), weight(weight) {

}

std::string Item::getName() const {
	return name;
}

Item::~Item() {
	std::cout << "Item desctructor called" << std::endl;
}
