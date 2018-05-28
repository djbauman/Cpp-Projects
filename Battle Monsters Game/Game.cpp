
/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Game
* class.
*********************************************************************/
#include "Game.hpp"

void Game::play()
{
	std::cout << std::endl << "Prepare to battle!" << std::endl << std::endl;

	Selection menu2op1("1) Barbarian");
	Selection menu2op2("2) Vampire");
	Selection menu2op3("3) Blue Men");
	Selection menu2op4("4) Medusa");
	Selection menu2op5("5) Harry Potter");
	Selection* menu2op1Ptr = &menu2op1;
	Selection* menu2op2Ptr = &menu2op2;
	Selection* menu2op3Ptr = &menu2op3;
	Selection* menu2op4Ptr = &menu2op4;
	Selection* menu2op5Ptr = &menu2op5;

	Menu menu2;
	menu2.add(menu2op1Ptr);
	menu2.add(menu2op2Ptr);
	menu2.add(menu2op3Ptr);
	menu2.add(menu2op4Ptr);
	menu2.add(menu2op5Ptr);

	std::cout << "Choose a character for Player 1." << std::endl;
	menu2.displayMenu();
	menu2.makeChoice();

	if (menu2.getChoice() == 1)
	{
		player1 = new Barbarian();
	}
	if (menu2.getChoice() == 2)
	{
		player1 = new Vampire();
	}
	if (menu2.getChoice() == 3)
	{
		player1 = new BlueMen();
	}
	if (menu2.getChoice() == 4)
	{
		player1 = new Medusa();
	}
	if (menu2.getChoice() == 5)
	{
		player1 = new HarryPotter();
	}

	std::cout << std::endl << "Choose a character for Player 2." << std::endl;
	menu2.displayMenu();
	menu2.makeChoice();

	if (menu2.getChoice() == 1)
	{
		player2 = new Barbarian();
	}
	if (menu2.getChoice() == 2)
	{
		player2 = new Vampire();
	}
	if (menu2.getChoice() == 3)
	{
		player2 = new BlueMen();
	}
	if (menu2.getChoice() == 4)
	{
		player2 = new Medusa();
	}
	if (menu2.getChoice() == 5)
	{
		player2 = new HarryPotter();
	}

	std::cout << std::endl;
	// set starting player via random 50/50 generator
	bool gameOver = 0;
	bool p1Turn = (rand() % 100) < 50;

	// Run a loop to...
	while (player1->getStrength() > 0 && player2->getStrength() > 0) // while strength > 0 for both player1 and player 2?
	{
		if (p1Turn)
		{
			std::cout << "Player 1's turn." << std::endl << std::endl;
			int p1Attack = player1->attack();
			int p2Defense = player2->defend() + player2->getArmor();
			int damage = p1Attack - p2Defense;
			if (damage < 1)
			{
				damage = 0;
			}

			player2->setStrength(player2->getStrength() - damage);
			if (player2->getStrength() < 1)
			{
				player2->setStrength(0);
			}

			std::cout << player2->getName() << " takes " << damage << " damage." << std::endl;
			std::cout << player2->getName() << " (P2) has " << player2->getStrength() << " strength points remaining." << std::endl;

			// Check for Medusa special condition
			if (player1->getName() == "Medusa")
			{
				if (player1->checkGlare())
				{
					if (p2Defense == 1001)
					{
						std::cout << "Vampire returns her gaze. Medusa looked away!" << std::endl;
					}
					else
					{
						std::cout << player2->getName() << " (P2) is turned to stone and can no longer fight." << std::endl;
						player2->setStrength(0);
					}
				}
			}
		
			// Check for Blue Men special condition
			if (player2->getName() == "Blue Men")
			{
				player2->checkDefense();
			}

			// Check for Harry Potter special condition
			if (player2->getName() == "Harry Potter")
			{
				if (player2->getStrength() < 1)
				{
					player2->checkExtraLife();
				}
			}

			std::cout << std::endl << "Press (Enter) to continue." << std::endl;

			p1Turn = 0;
			std::cin.get();
		}
		else
		{
			std::cout << "Player 2's turn." << std::endl << std::endl;
			int p2Attack = player2->attack();
			int p1Defense = player1->defend() + player1->getArmor();
			int damage = p2Attack - p1Defense;
			if (damage < 1)
			{
				damage = 0;
			}

			player1->setStrength(player1->getStrength() - damage);
			if (player1->getStrength() < 1)
			{
				player1->setStrength(0);
			}
			std::cout << player1->getName() << " takes " << damage << " damage." << std::endl;
			std::cout << player1->getName() << " (P1) has " << player1->getStrength() << " strength points remaining." << std::endl;

			// Check for Medusa special condition
			if (player2->getName() == "Medusa")
			{
				if (player2->checkGlare())
				{
					if (p1Defense == 1001)
					{
						std::cout << "Vampire returns her gaze. Medusa looked away!" << std::endl;
					}
					else
					{
						std::cout << player1->getName() << " (P1) is turned to stone and can no longer fight." << std::endl;
						player1->setStrength(0);
					}
				}
			}

			// Check for Blue Men special condition
			if (player1->getName() == "Blue Men")
			{
				player1->checkDefense();
			}

			// Check for Harry Potter special condition
			if (player1->getName() == "Harry Potter")
			{
				if (player1->getStrength() < 1)
				{
					player1->checkExtraLife();
				}
			}

			std::cout << std::endl << "Press (Enter) to continue." << std::endl;

			p1Turn = 1;
			std::cin.get();
		}
	}

	if (player1->getStrength() == 0)
	{
		std::cout << "Player 2 wins with " << player2->getName() << "!" << std::endl;
	}
	else if (player2->getStrength() == 0)
	{
		std::cout << "Player 1 wins with " << player1->getName() << "!" << std::endl;
	}

	std::cout << "Press (Enter) to return to the main menu." << std::endl;

	// Deallocate objects
	delete player1;
	delete player2;

	std::cin.get();
}