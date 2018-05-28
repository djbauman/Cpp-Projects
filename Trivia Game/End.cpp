#include "End.hpp"

End::End(Player* playerIn)
{
	name = "End";
	player = playerIn;
}

void End::play()
{
	player->addStep(1);
	if (player->getSteps() > 30)
	{
		this->gameOver->play();
		return;
	}
	if (player->checkInv() < 8)
	{
		std::cout << "Looks like you haven't collected all eight badges yet. Come back when you have." << std::endl << std::endl;
		this->back->play();
	}
	else
	{
		std::cout << "Well, I see you have all eight badges. But can you answer this final question?" << std::endl;
		std::cout << "A man is sentenced to death. He has to choose between three rooms." << std::endl;
		std::cout << "Room 1 is full of raging fires. Room 2, assassins with loaded guns. And Room 3," << std::endl;
		std::cout << "lions who haven't eaten in years. Which room is the safest?" << std::endl;
		

		Selection option1("1) Room 1");
		Selection option2("2) Room 2");
		Selection option3("3) Room 3");
		Selection* option1Ptr = &option1;
		Selection* option2Ptr = &option2;
		Selection* option3Ptr = &option3;

		Menu menu1;
		menu1.add(option1Ptr);
		menu1.add(option2Ptr);
		menu1.add(option3Ptr);
		menu1.displayMenu();
		menu1.makeChoice();

		if (menu1.getChoice() == 3)
		{
			cleared = true;

			std::cout << "That's right. The lions all died of starvation!" << std::endl;
			player->setPlayerWon();
			this->gameOver->play();
			return;

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
					this->back->play();
				}
			}
		}
	}
	
}