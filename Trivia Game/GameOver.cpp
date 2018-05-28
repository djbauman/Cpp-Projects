#include "GameOver.hpp"



GameOver::GameOver(Player* playerIn)
{
	player = playerIn;
}

void GameOver::play()
{
	if (!player->checkPlayerWon())
	{
		if (player->getSteps() > 30)
		{
			std::cout << "Think you can wander these halls forever? Think again!" << std::endl << std::endl;
		}
		std::cout << "Game over. Better luck next time." << std::endl << std::endl;
	}

	else
	{
		std::cout << "Congratulations! You beat the game." << std::endl << std::endl;
	}
}
