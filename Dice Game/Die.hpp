/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This header file contains the class declaration for
* the Die class. 
*********************************************************************/
#ifndef DIE_HPP
#define DIE_HPP
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include "getInput.hpp"
#include "Menu.hpp"

class Die
{
private:

protected:
	int sides;			// Number of sides on the die
	int lastRoll;		// Value of most recent roll

public:
	Die();				// Default constructor; makes a 6-sided die
	Die(int N);			// Custom constructor; makes an N-sided die
	int rollDie();		// Returns a random number between 1 and N (biased in the derived class)
	int getLastRoll();
};

#endif


