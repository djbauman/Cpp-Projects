/*********************************************************************
* Author: Daniel Bauman
* Date: July 26, 2017
* Description: This file defines the reverse() function. This
* function takes a string and prints it backwards.
*********************************************************************/
#include "reverse.hpp"

void reverse(std::string input)
{
	// If the input string is only 1 character long, 
	// print that character and exit the function
	if (input.length() == 1)
	{
		std::cout << input[0];
		return;
	}

	// Otherwise, print the last character in the
	// input string...
	std::cout << input[input.length()-1];

	// ... remove the last character
	// of the input string...
	input.pop_back();

	// ...and recursively feed this shortened string 
	// into the function.
	reverse(input);

}