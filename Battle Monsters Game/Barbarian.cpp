/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Barbarian
* class.
*********************************************************************/

#include "Barbarian.hpp"


Barbarian::Barbarian()
{
	srand(time(NULL));
	this->setName("Barbarian");
	this->setArmor(0);
	this->setStrength(12);
	this->setAttackRolls(2);
	this->setDefendRolls(2);
}

int Barbarian::attack()
{
	int damage = 0;
	for (int i = 0; i < this->getAttackRolls(); i++)
	{
		damage += (rand() % 6 + 1);
	}
	std::cout << "Barbarian swings for " << damage << "." << std::endl;
	return damage;
}

int Barbarian::defend()
{
	int defense = 0;
	for (int i = 0; i < this->getDefendRolls(); i++)
	{
		defense += (rand() % 6 + 1);
	}
	std::cout << "Barbarian defends for " << defense << "." << std::endl;
	return defense;
}
