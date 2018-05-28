/*********************************************************************
* Author: Daniel Bauman
* Date: 7/6/2017
* Description: This program prompts users to run Langton's Ant with
* either default settings or a custom board. If the custom board is
* chosen, it takes user inputs for various choices and uses them to
* initialize a Board. It also allows users to declare the Ant's
* starting location or to randomize the starting location.
*********************************************************************/

#include "Menu.hpp"
#include "board.hpp"
#include <time.h>

int main()
{	
	std::cout << "Welcome to the Langton's Ant program!" << std::endl;
	
	// Create menu items
	Selection choice1 ("1) Start Langton's Ant with a default board.");
	Selection choice2 ("2) Start Langton's Ant with a custom board.");
	Selection* choice1Ptr = &choice1;
	Selection* choice2Ptr = &choice2;
	
	// Create Menu object
	Menu menu1;
	menu1.add(choice1Ptr);
	menu1.add(choice2Ptr);
	menu1.displayMenu();
	menu1.makeChoice();
	
	// Run the program with default settings
	if (menu1.getChoice() == 1)
	{
		Ant ant1;
		Ant* ant1Ptr = &ant1;
		Board board1;
		int turnCount = 1;
		board1.placeAnt(ant1Ptr, board1.getWidth() / 2, board1.getHeight() / 2, NORTH);
		
		// For the default number of turns, print the board, display the current turn, and move the ant one step
		for (int i = 0; i < board1.getTurns(); i++)
		{
			board1.printBoard();
			std::cout << "Move " << turnCount << " of " << board1.getTurns() << std::endl;
			turnCount++;
			board1.moveAnt();
			std::cin.get();
		}

		board1.deleteBoard();

		std::cout << "Game complete!" << std::endl;
	}

	else if (menu1.getChoice() == 2)
	{
		int numRows;
		int numColumns;
		int startingX;
		int startingY;
		int startingDir;
		direction starting;
		int moves;

		std::cout << "Enter the number of rows: ";
		getInt(&numRows);
		while (numRows < 1 || numRows > 100)
		{
			std::cout << "Please enter a number of rows between 0 and 100." << std::endl;
			getInt(&numRows);
		}

		std::cout << "Enter the number of columns: ";
		getInt(&numColumns);
		while (numColumns < 1 || numColumns > 100)
		{
			std::cout << "Please enter a number of rows between 0 and 100." << std::endl;
			getInt(&numColumns);
		}

		// Offer the choice of randomized starting location
		std::cout << "Would you like a randomized starting location? (1 = Yes, 2 = No) " << std::endl;
		int randChoice;
		getInt(&randChoice);
		while (randChoice != 1 && randChoice != 2)
		{
			std::cout << "Please choose from the options above." << std::endl;
			getInt(&randChoice);
		}

		if (randChoice == 1)
		{
			srand(time(NULL));
			int randX = rand() % numRows;
			startingX = randX;
			int randY = rand() % numColumns;
			startingY = randY;

		}
		else if (randChoice == 2)
		{
			std::cout << "Enter the ant's starting row: ";
			getInt(&startingX);
			while (startingX < 1 || startingX > numRows)
			{
				std::cout << "Please choose between 1 and " << numRows << "." << std::endl;
				getInt(&startingX);
			}
			startingX--;

			std::cout << "Enter the ant's starting column: ";
			getInt(&startingY);
			while (startingY < 1 || startingY > numColumns)
			{
				std::cout << "Please choose between 1 and " << numColumns << "." << std::endl;
				getInt(&startingY);
			}
			startingY--;
		}

		// Prompt user for starting direction
		std::cout << "Enter the ant's starting direction (1 = North, 2 = East, 3 = South, 4 = West): ";
		getInt(&startingDir);
		while (startingDir < 1 || startingDir > 4)
		{
			std::cout << "Please choose from the four directions above." << std::endl;
			getInt(&startingDir);
		}

		if (startingDir == 1)
		{
			starting = NORTH;
		}
		else if (startingDir == 2)
		{
			starting = EAST;
		}
		else if (startingDir == 3)
		{
			starting = SOUTH;
		}
		else if (startingDir == 4)
		{
			starting = WEST;
		}

		// Prompt user for the number of turns
		std::cout << "Enter the number of moves to make: ";
		getInt(&moves);
		while (moves < 1 || moves > 1000)
		{
			std::cout << "Please choose between 1 and 1000 moves." << std::endl;
			getInt(&moves);
		}

		// Run the program with user-defined settings
		Ant ant2;
		Ant* ant2Ptr = &ant2;
		Board board2(numRows, numColumns, moves);
		board2.placeAnt(ant2Ptr, startingX, startingY, starting);
		int turnCount = 1;

		// For the number of turns specified, print the board, display the current turn, and move the ant one step
		for (int i = 0; i < moves; i++)
		{
			board2.printBoard();
			std::cout << "Turn " << turnCount << " of " << board2.getTurns() << std::endl;
			turnCount++;
			board2.moveAnt();
			std::cin.get();
		}

		board2.deleteBoard();

		std::cout << "Game complete!" << std::endl;
	}

	std::cin.get();
}

