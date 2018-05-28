/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This .cpp file contains function definitions for
* the LoadedDie class.
*********************************************************************/
#include "LoadedDie.hpp"

LoadedDie::LoadedDie(int N)
{
	srand(time(NULL));
	sides = N;
}

int LoadedDie::rollDie()
{
	int result = (rand() % sides) + 1;

	if (result < sides/3) // This line adjusts the frequency of re-rolls
	{
		result += sides/2;
	}
	// For testing
	// result = 100;
	lastRoll = result;
		
	return result;
}



