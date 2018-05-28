/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Barbarian
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"

class Barbarian :public Creature
{
private: 
	

public:
	Barbarian();
	int attack();
	int defend();
};

