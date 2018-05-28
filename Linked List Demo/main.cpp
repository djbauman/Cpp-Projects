/*********************************************************************
* Author: Daniel Bauman
* Date: August 4 2017
* Description: This file demonstrates the Queue class by creating
* a menu and calling the various Queue functions.
*********************************************************************/

#include <string>
#include "Queue.h"
#include "Menu.hpp"
#include "getInput.hpp"


int main()
{
	// Create Queue instance
	Queue list;
	
	// Create menu options
	Selection op1("1) Enter a value to be added to the queue");
	Selection op2("2) Display first node (front) value");
	Selection op3("3) Remove first node (front) value");
	Selection op4("4) Display the queue contents");
	Selection op5("5) Exit");
	Selection* op1Ptr = &op1;
	Selection* op2Ptr = &op2;
	Selection* op3Ptr = &op3;
	Selection* op4Ptr = &op4;
	Selection* op5Ptr = &op5;

	// Create menu and add options
	Menu menu1;
	menu1.add(op1Ptr);
	menu1.add(op2Ptr);
	menu1.add(op3Ptr);
	menu1.add(op4Ptr);
	menu1.add(op5Ptr);

	// Display the menu choices and get inputs
	while (true)
	{
		menu1.displayMenu();
		menu1.makeChoice();

		if (menu1.getChoice() == 1)
		{
			int num;
			std::cout << "Enter an integer: ";
			getInt(&num);
			list.addBack(num);
			std::cout << std::endl << std::endl;
		}
		if (menu1.getChoice() == 2)
		{
			list.getFront();
		}
		if (menu1.getChoice() == 3)
		{
			list.removeFront();
		}
		if (menu1.getChoice() == 4)
		{
			list.print();
			std::cout << std::endl << std::endl;
		}
		if (menu1.getChoice() == 5)
		{
			break;
		}
	}

	return 0;
}