#include "Weapon.h"

Weapon::Weapon(const std::string& name, int weight, int damage, double range)
	: Item(name, weight), damage(damage), range(range) {}

void Weapon::use() {
	std::cout << " Using weapon " << getName() << " with damage " << damage << "and range " << range << "\n " <<std::endl;
}
