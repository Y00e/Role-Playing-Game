#include <iostream>
#include "player.h"
#include "Armor.h"

int main()
{
    std::cout << "Welcome to roleplaying game!\n";

    std::cout << "Choose a name for your player: ";

    std::string playerName;

    std::cin >> playerName;

    Player player1 = Player(playerName);

    std::cout <<"Hello " << playerName << ", what do you want to do? \n 1. add item for your inventory \n"
    "2. show all items in your inventory \n 3. use a item \n 4. remove a item for your inventory \n 5. exit the program";

    int option;

    std::cin >> option;
    Armor chainmail = Armor("Chainmail", 10, 5);

    int chooseOption;

    bool gameOver;

    while (!gameOver){

        switch(option) {
            case 1 : player1.addItem(&chainmail);
            break;
            
            case 2 : player1.displayInventory();
            break;
            
            case 3 : 
            std::cout << "What index do you want to use" << std::endl;
            std::cin >> chooseOption;
        
            player1.useItem(chooseOption);
            break;
            
            case 4 : 
            std::cout << "What index do you want to delete" << std::endl;
            std::cin >> chooseOption;
            player1.removeItem(chooseOption);
            break;
            
            case 5 : gameOver = true;
            break;
        };

    };


    return 0;
}

