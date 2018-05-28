/*********************************************************************
* Author: Daniel Bauman
* Date: July 30, 2017
* Description: This file creates a Menu and takes input to run
* the user's choice of recursion function (reverse, arraySum, or
* triangleSum).
*********************************************************************/
#include "reverse.hpp"
#include "arraySum.hpp"
#include "triangleSum.hpp"
#include "getInput.hpp"
#include "Menu.hpp"

int main()
{
	std::cout << "Welcome to Lab 5 - Recursion" << std::endl << std::endl;

	// Create Selection objects and pointers
	Selection option1("1) Reverse a string");
	Selection option2("2) Sum an array");
	Selection option3("3) Compute a triangle number");
	Selection option4("4) Quit");
	Selection* option1Ptr = &option1;
	Selection* option2Ptr = &option2;
	Selection* option3Ptr = &option3;
	Selection* option4Ptr = &option4;

	// Create Menu object and add options
	Menu mainMenu;
	mainMenu.add(option1Ptr);
	mainMenu.add(option2Ptr);
	mainMenu.add(option3Ptr);
	mainMenu.add(option4Ptr);

	// Display looping Menu with four options
	while (true)
	{
		std::cout << "Main Menu" << std::endl;
		mainMenu.displayMenu();
		mainMenu.makeChoice();

		// If choice 1, take in a string and 
		// run the reverse() function.
		if (mainMenu.getChoice() == 1)
		{
			std::string stringIn;
			std::cout << "Enter any string." << std::endl << std::endl;
			getString(&stringIn);
			std::cout << std::endl;
			reverse(stringIn);
			std::cout << std::endl << std::endl;
		}
		// If choice 2, take in an int for the
		// array size, and then additional ints
		// to populate the array. The run the
		// arraySum() function.
		if (mainMenu.getChoice() == 2)
		{
			int size;
			int value;

			std::cout << "What size of an array would you like? (enter an integer)" << std::endl << std::endl;
			getInt(&size);

			int* array = new int[size];

			std::cout << "Please enter " << size << " numbers to fill the array." << std::endl << std::endl;
			for (int i = 0; i < size; i++)
			{
				std::cout << "Array value " << i+1 << ": ";
				getInt(&value);
				array[i] = value;
				std::cout << std::endl;
			}

			std::cout << "The sum of this array is " << arraySum(array, size) << std::endl << std::endl;
			delete[] array;
		}
		// If choice 3, take an int value and
		// run the triangleSum() function.
		if (mainMenu.getChoice() == 3)
		{
			int intIn;
			std::cout << "Enter an integer." << std::endl << std::endl;
			getInt(&intIn);
			std::cout << "The triangle number of " << intIn << " is " << triangleSum(intIn) << std::endl << std::endl;
		}
		// If choice 4, return from main().
		if (mainMenu.getChoice() == 4)
		{
			return 0;
		}
	}
}
