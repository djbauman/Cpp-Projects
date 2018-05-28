/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains definitions for the Creature
* class.
*********************************************************************/
#include "Creature.hpp"


void Creature::setName(std::string nameIn)
{
	name = nameIn;
}

void Creature::setArmor(int armorIn)
{
	armor = armorIn;
}

void Creature::setStrength(int strengthIn)
{
	strength = strengthIn;
}

void Creature::setAttackRolls(int numRolls)
{
	attackRolls = numRolls;
}

void Creature::setDefendRolls(int numRolls)
{
	defendRolls = numRolls;
}

std::string Creature::getName()
{
	return name;
}

int Creature::getArmor()
{
	return armor;
}

int Creature::getStrength()
{
	return strength;
}

int Creature::getAttackRolls()
{
	return attackRolls;
}

int Creature::getDefendRolls()
{
	return defendRolls;
}

int Creature::attack()
{
	return 0;
}

int Creature::defend()
{
	return 0;
}

void Creature::checkDefense()
{
	return;
}

bool Creature::checkGlare()
{
	return 0;
}

bool Creature::checkExtraLife()
{
	return 0;
}