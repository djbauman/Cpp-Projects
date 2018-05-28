/*********************************************************************
** Program name:
** Author:
** Date: 6/30/2017
** Description: This .hpp file declares functions for Selection class
** objects.
**********************************************************************/
#ifndef SELECTION_HPP
#define SELECTION_HPP
#include <string>
#include <iostream>
#include <vector>
#include "getInput.hpp"

class Selection
{
private:
	
	std::string title;					// Stores string value

public:
	
	Selection(std::string titleIn);		// Constructor taking string input
	std::string getTitle();				// Returns Selection title

};

#endif

