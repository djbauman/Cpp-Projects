/*********************************************************************
** Program name:
** Author:
** Date: 6/30/2017
** Description: This .cpp file defines functions for Menu class
** objects.
**********************************************************************/
#include "Menu.hpp"

void Menu::add(Selection* selectionIn)
{
	list.push_back(selectionIn);
}

void Menu::displayMenu()
{
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i]->getTitle() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << "Enter your choice: ";
}

void Menu::makeChoice()
{
	int userChoice;

	getInt(&userChoice);

	while (userChoice < 1 || userChoice > list.size())
	{
		std::cout << "Please choose from the options above." << std::endl;
		getInt(&userChoice);
	}

	currentChoice = userChoice;

}

int Menu::getChoice()
{
	return currentChoice;
}