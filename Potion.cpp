#include "Potion.h"
#include <iostream> 

Potion::Potion(const std::string& name, int weight, int healingAmount) 
    : Item(name, weight), healingAmount(healingAmount) {}

void Potion::use() {
    std::cout << "You use the potion: " << getName() << ". It heals for " << healingAmount << " HP.\n";
}

Potion::~Potion() {
    std::cout << "Potion " << getName() << " is destroyed.\n";
}
