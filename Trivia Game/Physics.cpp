#include "Physics.hpp"

Physics::Physics(Player* playerIn)
{
	name = "Physics";
	player = playerIn;
}

void Physics::play()
{
	player->addStep(1);
	if (player->getSteps() > 30)
	{
		this->gameOver->play();
		return;
	}
	if (!cleared)
	{
		std::cout << "Your topic is physics. Here is your question:" << std::endl << std::endl;
		std::cout << "Maxwell's equations famously describe the behavior of light in terms of..." << std::endl;

		Selection option1("1) fusion reactions within stars.");
		Selection option2("2) quantum mechanics.");
		Selection option3("3) mass, energy, and the speed of light.");
		Selection option4("4) special and general relativity.");
		Selection option5("5) fluctuating electric and magnetic fields");
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

		if (menu1.getChoice() == 5)
		{
			cleared = true;
			player->add("Physics Badge");
			std::cout << "You answered correctly! Here is your Physics Badge." << std::endl;

			Selection option1("1) Return to the hallway");
			Selection* option1Ptr = &option1;
			Menu menu2;
			menu2.add(option1Ptr);
			menu2.displayMenu();
			menu2.makeChoice();

			if (menu2.getChoice() == 1)
			{
				this->left->play();
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
					this->left->play();
				}
			}
		}
	}
	if (player->checkPlayerWon() || player->getMistakes() > 5 || player->getSteps() > 30)
	{
		return;
	}
	std::cout << "Returned to gloat, have you? You have already answered the Physics question!" << std::endl;
	Selection option1("1) Return to the hallway");
	Selection* option1Ptr = &option1;
	Menu menu2;
	menu2.add(option1Ptr);
	menu2.displayMenu();
	menu2.makeChoice();

	if (menu2.getChoice() == 1)
	{
		this->left->play();
	}
}