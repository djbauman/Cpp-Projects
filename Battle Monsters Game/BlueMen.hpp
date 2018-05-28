/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Blue Men
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"

class BlueMen :public Creature
{
private:

public:
	BlueMen();
	int attack();
	int defend();
	void checkDefense();
};

