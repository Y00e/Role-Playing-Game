#include "Item.h"
#include <string>


virtual  ~Item();

Item::Item(const std::string name, int weight) : name(name), weight(weight) {}
