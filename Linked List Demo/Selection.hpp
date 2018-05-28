#ifndef SELECTION_HPP
#define SELECTION_HPP
#include <string>
#include <iostream>
#include <vector>
#include "getInput.hpp"

class Selection
{
private:
	
	std::string title;

public:
	
	Selection(std::string titleIn);
	std::string getTitle();

};


#endif

