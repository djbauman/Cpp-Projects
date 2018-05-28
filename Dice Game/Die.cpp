/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This .cpp file contains function definitions for
* the Die class.
*********************************************************************/
#include "Die.hpp"

// Default constructor
Die::Die()
{
	srand(time(NULL));
	sides = 6;
}

Die::Die(int N)
{
	srand(time(NULL));
	sides = N;
}

int Die::rollDie()
{
	int result = (rand() % sides) + 1;

	lastRoll = result;

	return result;
}

int Die::getLastRoll()
{
	return lastRoll;
}