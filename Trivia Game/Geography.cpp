#include "Geography.hpp"

Geography::Geography(Player* playerIn)
{
	name = "Geography";
	player = playerIn;
}

void Geography::play()
{
	player->addStep(1);
	if (player->getSteps() > 30)
	{
		this->gameOver->play();
		return;
	}
	if (!cleared)
	{
		std::cout << "Welcome to geography class. I hope you know your geography!" << std::endl << std::endl;
		std::cout << "Venezuela shares its border with what countries?" << std::endl;

		Selection option1("1) Panama, Ecuador, & Bolivia");
		Selection option2("2) Colombia, Guyana, & Brazil");
		Selection option3("3) Brazil, Peru, & Paraguay");
		Selection option4("4) Argentina, Uruguay, & Suriname");
		Selection option5("5) Chile, Columbia, & Costa Rica");
		Selection* option1Ptr = &option1;
		Selection* option2Ptr = &option2;
		Selection* option3Ptr = &option3;
		Selection* option4Ptr = &option4;
		Selection* option5Ptr = &option5;

		Menu menu1;
		menu1.add(option1Ptr);
		menu1.add(option2Ptr);
		menu1.add(option3Ptr);
		menu1.add(option4Ptr);
		menu1.add(option5Ptr);
		menu1.displayMenu();
		menu1.makeChoice();

		if (menu1.getChoice() == 2)
		{
			cleared = true;
			player->add("Geography Badge");
			std::cout << "You answered correctly! Here is your Geography Badge." << std::endl;

			Selection option1("1) Return to the hallway");
			Selection* option1Ptr = &option1;
			Menu menu2;
			menu2.add(option1Ptr);
			menu2.displayMenu();
			menu2.makeChoice();

			if (menu2.getChoice() == 1)
			{
				this->right->play();
			}
		}
		else
		{
			std::cout << "Incorrect!" << std::endl;
			player->addMistake();
			if (player->getMistakes() > 5)
			{
				this->gameOver->play();
				return;
			}
			else
			{
				Selection option1("1) Try again");
				Selection option2("2) Leave");
				Selection* option1Ptr = &option1;
				Selection* option2Ptr = &option2;

				Menu menu;
				menu.add(option1Ptr);
				menu.add(option2Ptr);
				menu.displayMenu();
				menu.makeChoice();

				if (menu.getChoice() == 1)
				{
					this->play();
				}
				if (menu.getChoice() == 2)
				{
					this->right->play();
				}
			}
		}
	}
	if (player->checkPlayerWon() || player->getMistakes() > 5 || player->getSteps() > 30)
	{
		return;
	}
	std::cout << "Returned to gloat, have you? You have already answered the Geography question!" << std::endl;
	Selection option1("1) Return to the hallway");
	Selection* option1Ptr = &option1;
	Menu menu2;
	menu2.add(option1Ptr);
	menu2.displayMenu();
	menu2.makeChoice();

	if (menu2.getChoice() == 1)
	{
		this->right->play();
	}
}