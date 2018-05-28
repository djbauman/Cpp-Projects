/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This header file contains the class declaration for
* the LoadedDie class.
*********************************************************************/
#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP
#include "Die.hpp"

class LoadedDie: public Die
{
public:
	LoadedDie(int N);		// Custom constructor, makes an N-sided die
	int rollDie();			// Override of base class function. Never rolls below a certain threshold.
};
#endif