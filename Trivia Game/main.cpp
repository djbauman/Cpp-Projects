#include "Game.hpp"

int main()
{
	Selection option1("1) Play");
	Selection option2("2) Quit");
	Selection* option1Ptr = &option1;
	Selection* option2Ptr = &option2;
	Menu menu;
	menu.add(option1Ptr);
	menu.add(option2Ptr);
	
	std::cout << "Welcome to the Trivia Game. In the rooms ahead you will" << std::endl;
	std::cout << "be quizzed on your knowledge of various subjects." << std::endl << std::endl;

	while (true)
	{
		menu.displayMenu();
		menu.makeChoice();
		std::cout << std::endl;
		if (menu.getChoice() == 1)
		{
			Game game;
		}
		if (menu.getChoice() == 2)
		{
			return 0;
		}
	}
	
	
	
}