/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file presents a menu and creates a Game object
* to be played.
*********************************************************************/
#include "Game.hpp"

int main()
{
	std::cout << "Welcome to Fantasy Battle Simulator 2017" << std::endl << std::endl;

	Selection menu1op1("1) Play");
	Selection menu1op2("2) Quit");
	Selection* menu1op1Ptr = &menu1op1;
	Selection* menu1op2Ptr = &menu1op2;

	Menu menu1;
	menu1.add(menu1op1Ptr);
	menu1.add(menu1op2Ptr);

	while (true)
	{
		menu1.displayMenu();
		menu1.makeChoice();

		if (menu1.getChoice() == 1)
		{
			Game game1;
			game1.play();
		}
		if (menu1.getChoice() == 2)
		{
			return 0;
		}
	}
	


	
	
	std::cin.ignore();
	std::cin.get();
	
}