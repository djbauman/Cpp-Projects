#include "Hall1.hpp"

Hall1::Hall1(Player* playerIn)
{
	name = "Hall1";
	player = playerIn;
}

void Hall1::play()
{
	player->addStep(1);
	if (player->getSteps() > 30)
	{
		this->gameOver->play();
		return;
	}
	std::cout << "You are standing in hallway 1. There are doors in all four directions." << std::endl;
	// needs menu option to go left, right, straight, or back

	Selection left("1) Go left");
	Selection right("2) Go right");
	Selection forward("3) Go forward");
	Selection back("4) Go backward");
	Selection viewInv("5) View status & inventory");

	Selection* leftPtr = &left;
	Selection* rightPtr = &right;
	Selection* forwardPtr = &forward;
	Selection* backPtr = &back;
	Selection* invPtr = &viewInv;

	Menu menu;
	menu.add(leftPtr);
	menu.add(rightPtr);
	menu.add(forwardPtr);
	menu.add(backPtr);
	menu.add(invPtr);

	menu.displayMenu();
	menu.makeChoice();
	
	if (menu.getChoice() == 1)
	{
		this->left->play();
	}
	if (menu.getChoice() == 2)
	{
		this->right->play();
	}
	if (menu.getChoice() == 3)
	{
		this->forward->play();
	}
	if (menu.getChoice() == 4)
	{
		this->back->play();
	}
	if (menu.getChoice() == 5)
	{
		player->showStatus();
		std::cout << std::endl;
		// need to decrement steps!
		player->addStep(-1);
		this->play();
	}

}