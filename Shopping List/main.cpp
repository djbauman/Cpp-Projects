/*********************************************************************
* Author: Daniel Bauman
* Date: July 17, 2017
* Description: This program generates a Menu, then creates a List 
* and prompts the user to add Item objects to it.
*********************************************************************/
#include "List.hpp"

int main()
{
	std::cout << "Welcome to Grocery List Simulator" << std::endl << std::endl;
	std::cout << "Please choose from the menu options below." << std::endl << std::endl;

	// Variables for user input
	std::string name;
	std::string units;
	int price;
	int quantity;
	std::string remove;

	// Create List item
	List list1;

	// Create main options
	Selection option1("1) Add item");
	Selection option2("2) Remove item");
	Selection option3("3) View list");
	Selection option4("4) Quit");
	Selection* option1Ptr = &option1;
	Selection* option2Ptr = &option2;
	Selection* option3Ptr = &option3;
	Selection* option4Ptr = &option4;

	// Build and display main menu
	Menu mainMenu;
	mainMenu.add(option1Ptr);
	mainMenu.add(option2Ptr);
	mainMenu.add(option3Ptr);
	mainMenu.add(option4Ptr);
	
	while (true)
	{
		std::cout << "Main Menu" << std::endl;
		mainMenu.displayMenu();
		mainMenu.makeChoice();

		if (mainMenu.getChoice() == 1)
		{
			std::cout << "Enter the name of the item: ";
			getString(&name);

			std::cout << std::endl << "Enter the item's units (e.g. lbs., oz., cans): " << std::endl;
			getString(&units);

			std::cout << std::endl << "Enter the item's price ($): " << std::endl;
			getInt(&price);

			std::cout << std::endl << "How many would you like?" << std::endl;
			getInt(&quantity);

			std::cout << std::endl;

			Item tempItem(name, units, price, quantity);
			list1.add(tempItem);
			std::cout << std::endl << "Item added." << std::endl << std::endl;
		}

		if (mainMenu.getChoice() == 2)
		{
			std::cout << "Enter the name of the item to remove:" << std::endl;
			getString(&remove);
			std::cout << std::endl;
			list1.remove(remove);
		
		}

		if (mainMenu.getChoice() == 3)
		{
			std::cout << std::endl;
			list1.showList();
			std::cout << std::endl;
		}

		if (mainMenu.getChoice() == 4)
		{
			return 0;
		}

	}

	return 0;
}



