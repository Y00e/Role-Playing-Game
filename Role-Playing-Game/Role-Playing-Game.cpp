#include <iostream>
#include "player.h"
#include "Armor.h"
#include "Weapon.h"
#include "Potion.h"

int main()
{
    std::cout << "Welcome to roleplaying game!\n";

    std::cout << "Choose a name for your player: ";

    std::string playerName;

    std::cin >> playerName;

    Player player1 = Player(playerName);

    std::vector<Item*> listOfItems;


    listOfItems.push_back(new Armor("Chainmail", 10, 5));
    listOfItems.push_back(new Armor("Chestplate", 50, 20));
    listOfItems.push_back(new Weapon("Spear", 20, 200, 5.5));
    listOfItems.push_back(new Weapon("Crossbow", 5, 100, 20.5));
    listOfItems.push_back(new Potion("Minor healing potion", 2, 100));
    listOfItems.push_back(new Potion("Major healing potion", 4, 200));

    int chooseOption;

    bool gameOver;

    std::cout <<"Hello " << playerName << std::endl;

    while (!gameOver){

    std::cout << "What do you want to do? \n 1. add item for your inventory \n"
    " 2. show all items in your inventory \n 3. use a item \n 4. remove a item for your inventory \n 5. exit the program \n";

    int option;

    std::cin >> option;

        switch(option) {
            
            case 1 : 
                std::cout << "Choose an item to add: " << std::endl;
                for (size_t i = 0; i < listOfItems.size(); ++i) {
                    std::cout << "Index " << i << ": " << listOfItems[i]->getName() << "\n";
                }
                std::cin >> chooseOption;
                if (chooseOption >= 0 && chooseOption < listOfItems.size()) {
                    player1.addItem(listOfItems[chooseOption]);
                } else {
                    std::cout << "Invalid option.\n";
                }
                break;
            
            case 2 : 
                player1.displayInventory();
                break;
            
            case 3 : 
                std::cout << "What index do you want to use" << std::endl;
                player1.displayInventory();
                std::cin >> chooseOption;
        
                player1.useItem(chooseOption);
                break;
            
            case 4 : 
                std::cout << "What index do you want to delete" << std::endl;
                player1.displayInventory();
                std::cin >> chooseOption;
                player1.removeItem(chooseOption);
                break;
            
            case 5 : 
                gameOver = true;
                break;
        };
        

    };

    for (Item* item : listOfItems) {
    delete item;
    }


    return 0;
}

