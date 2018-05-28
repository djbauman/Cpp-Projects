/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Medusa
* class.
*********************************************************************/
#include "Medusa.hpp"

Medusa::Medusa()
{
	srand(time(NULL));
	this->setName("Medusa");
	this->setArmor(3);
	this->setStrength(8);
	this->setAttackRolls(2);
	this->setDefendRolls(1);

	glare = false;
}

int Medusa::attack()
{
	int damage = 0;
	for (int i = 0; i < this->getAttackRolls(); i++)
	{
		damage += (rand() % 6 + 1);
	}
	if (damage > 0) // TESTING - changed from damage == 12
	{
		glare = true;
		std::cout << "Medusa locks eyes with the opponent and glares!" << std::endl;
		return damage;
	}
	else
	{
		std::cout << "Medusa bites for " << damage << "." << std::endl;
		return damage;
	}
}

int Medusa::defend()
{
	int defense = 0;
	for (int i = 0; i < this->getDefendRolls(); i++)
	{
		defense += (rand() % 6 + 1);
	}
	std::cout << "Medusa defends for " << defense + this->getArmor() << "." << std::endl;
	return defense;
}

bool Medusa::checkGlare()
{
	return glare;
}