/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Harry Potter
* class.
*********************************************************************/
#include "HarryPotter.hpp"

HarryPotter::HarryPotter()
{
	srand(time(NULL));
	this->setName("Harry Potter");
	this->setArmor(0);
	this->setStrength(20);
	this->setAttackRolls(2);
	this->setDefendRolls(2);
	extraLife = 1;
}

int HarryPotter::attack()
{
	int damage = 0;
	for (int i = 0; i < this->getAttackRolls(); i++)
	{
		damage += (rand() % 6 + 1);
	}
	std::cout << "Harry casts for " << damage << "." << std::endl;
	return damage;
}

int HarryPotter::defend()
{
	int defense = 0;
	for (int i = 0; i < this->getDefendRolls(); i++)
	{
		defense += (rand() % 6 + 1);
	}
	std::cout << "Harry defends for " << defense << "." << std::endl;
	return defense;
}

bool HarryPotter::checkExtraLife()
{
	if (extraLife)
	{
		std::cout << "Harry is brought back to life!" << std::endl;
		this->setStrength(20);
		extraLife = 0;
		return 1;
	}
	return 0;
}

