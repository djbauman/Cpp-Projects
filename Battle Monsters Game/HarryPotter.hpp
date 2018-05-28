/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Harry Potter
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"

class HarryPotter :public Creature
{
private:
	bool extraLife;
public:
	HarryPotter();
	int attack();
	int defend();
	bool checkExtraLife();
};

