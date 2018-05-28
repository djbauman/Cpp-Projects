#include "Player.hpp"



Player::Player()
{

}

void Player::add(std::string itemIn)
{
	inventory.push_back(itemIn);
}

void Player::addMistake()
{
	mistakes++;
}

void Player::addStep(int stepsIn)
{
	steps+= stepsIn;
}

void Player::setPlayerWon()
{
	playerWon = true;
}

int Player::getMistakes()
{
	return mistakes;
}

void Player::showStatus()
{
	std::cout << "You have taken " << steps << " steps and " << std::endl;
	std::cout << "answered incorrectly " << mistakes << " times." << std::endl;
	if (inventory.size() == 0)
	{
		std::cout << "Your inventory is empty." << std::endl;
	}
	else
	{
		std::cout << "Your inventory contains:" << std::endl;
		for (int i = 0; i < inventory.size(); i++)
		{
			std::cout << i+1 << ": " << inventory[i] << std::endl;
		}
	}
}

int Player::getSteps()
{
	return steps;
}

bool Player::checkPlayerWon()
{
	return playerWon;
}

int Player::checkInv()
{
	return inventory.size();
}