/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Vampire
* class.
*********************************************************************/
#include "Vampire.hpp"

Vampire::Vampire()
{
	srand(time(NULL));
	this->setName("Vampire");
	this->setArmor(1);
	this->setStrength(18);
	this->setAttackRolls(1);
	this->setDefendRolls(1);
	//this->setAttackSides(12);
	//this->setDefendSides(6);
}

int Vampire::attack()
{
	int damage = 0;
	for (int i = 0; i < this->getAttackRolls(); i++)
	{
		damage += (rand() % 12 + 1);
	}
	std::cout << "Vampire slashes for " << damage << "." << std::endl;
	return damage;
}

int Vampire::defend()
{
	int defense = 0;
	if (rand() % 100 < 50)
	{
		std::cout << "Vampire charms to avoid damage!" << std::endl;
		defense = 1000;
	}
	else
	{
		for (int i = 0; i < this->getDefendRolls(); i++)
		{
			defense += (rand() % 6 + 1);
		}
		std::cout << "Vampire defends for " << defense + this->getArmor() << "." << std::endl;
	}
	return defense;
}

