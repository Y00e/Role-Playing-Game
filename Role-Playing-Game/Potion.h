#pragma once
#include "Item.h"
#include <string>

class Potion : public Item {
private:
    int healingAmount; 

public:
    Potion(const std::string& name, int weight, int healingAmount);
    void use() override;

};
