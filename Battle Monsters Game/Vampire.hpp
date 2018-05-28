/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Vampire
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"

class Vampire :public Creature
{
private:

public:
	Vampire();
	int attack();
	int defend();
		
};

