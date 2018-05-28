/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Creature
* class, including virtual functions to be used by sub-classes.
*********************************************************************/

#pragma once
#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
#include "Menu.hpp"
#include "getInput.hpp"

class Creature
{
private:
	std::string name;					// String containing creature's name
	int armor;							// Armor value
	int strength;						// Strength value (hit points)
	int attackRolls;					// Number of rolls for attack
	int defendRolls;					// Number of rolls for defense


protected:
	
public:
	void setName(std::string);
	void setArmor(int);
	void setStrength(int);
	void setAttackRolls(int);
	void setDefendRolls(int);
	
	std::string getName();
	int getAttackRolls();
	int getDefendRolls();
	int getArmor();
	int getStrength();

	virtual int attack() = 0;			// Virtual function to be used for attack
	virtual int defend() = 0;			// Virtual function to be used for defense
	virtual void checkDefense();		// Blue Men special function
	virtual bool checkGlare();			// Medusa special function
	virtual bool checkExtraLife();		// Harry Potter special function
};

