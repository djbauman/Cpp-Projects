/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Blue Men
* class.
*********************************************************************/
#include "BlueMen.hpp"

BlueMen::BlueMen()
{
	srand(time(NULL));
	this->setName("Blue Men");
	this->setArmor(3);
	this->setStrength(12);
	this->setAttackRolls(2);
	this->setDefendRolls(3);
}

int BlueMen::attack()
{
	int damage = 0;
	for (int i = 0; i < this->getAttackRolls(); i++)
	{
		damage += (rand() % 10 + 1);
	}
	std::cout << "Blue Men swarm for " << damage << "." << std::endl;
	return damage;
}

int BlueMen::defend()
{
	int defense = 0;
	for (int i = 0; i < this->getDefendRolls(); i++)
	{
		defense += (rand() % 6 + 1);
	}
	std::cout << "Blue Men defend for " << defense + this->getArmor() << "." << std::endl;
	return defense;
}

void BlueMen::checkDefense()
{
	if (this->getStrength() < 8 && this->getStrength() > 4)
	{
		this->setDefendRolls(2);
		std::cout << "The Blue Men's defense is weakened!" << std::endl;
	}
	else if (this->getStrength() < 4 && this->getStrength() > 0)
	{
		this->setDefendRolls(1);
		std::cout << "The Blue Men's defense is greatly weakened!" << std::endl;
	}
}

