/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Medusa
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"

class Medusa :public Creature
{
private:
	bool glare;
public:
	Medusa();
	int attack();
	int defend();
	bool checkGlare();
};

