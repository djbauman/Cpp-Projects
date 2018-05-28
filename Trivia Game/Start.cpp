#include "Start.hpp"

Start::Start(Player* playerIn)
{
	name = "Start";
	player = playerIn;
}

void Start::play()
{
	std::cout << "You stand at the entrance to the Quiz Hall." << std::endl;

	Selection option1("1) Walk to the room ahead.");
	Selection* option1Ptr = &option1;

	Menu menu;
	menu.add(option1Ptr);
	menu.displayMenu();
	menu.makeChoice();

	if (menu.getChoice() == 1)
	{
		this->forward->play();
	}


}
