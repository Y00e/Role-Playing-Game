#include <iostream>
#include "player.h"
#include "Armor.h"

int main()
{
    std::cout << "Welcome to roleplaying game!\n";

    Armor chainmail = Armor("Chainmail", 10, 5);
    Player playerA = Player("A");
    playerA.addItem(&chainmail);
    playerA.displayInventory();
    //kommentar

    return 0;
}

