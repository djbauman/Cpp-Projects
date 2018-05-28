/*********************************************************************
* Author: Daniel Bauman
* Date: May 28, 2017
* Description: This file contains function definitions for the Board 
* class member functions.
*********************************************************************/
#include "Board.hpp"

// Default constructor. Initializes 3x3 array with a '.' in each element.
Board::Board()
{
	for (int rows = 0; rows < 3; rows++)
	{
		for (int columns = 0; columns < 3; columns++)
		{
			grid[rows][columns] = '.';
		}
	}

}

// Method for making a move. Takes variables for turn, row, and column.
bool Board::makeMove(int whoseTurn, int coord1, int coord2) // need to add input validation
{
	int turn = whoseTurn;
	int rowChoice = coord1;
	int columnChoice = coord2;
	std::string playerMarker;

	if (whoseTurn == 1)
	{
		playerMarker = "X";
	}
	else if (whoseTurn == 2)
	{
		playerMarker = "O";
	}

	if (grid[rowChoice][columnChoice] == ".")
	{
		grid[rowChoice][columnChoice] = playerMarker;
		return true;
	}
		else
	{
		return false;
	}
	
}

// Function that returns a "state" enum data type for four different game conditions
state Board::gameState() // Returns X_WON, O_WON, DRAW, UNFINISHED (or 0, 1, 2, 3) (check a bunch of conditions, return appropriate number)
{
	// X win conditions
	// X wins by rows
	if (grid[0][0] == "X" && grid[0][1] == "X" && grid[0][2] == "X")
		return X_WON;
	if (grid[1][0] == "X" && grid[1][1] == "X" && grid[1][2] == "X")
		return X_WON;
	if (grid[2][0] == "X" && grid[2][1] == "X" && grid[2][2] == "X")
		return X_WON;
	// X wins by columns 
	if (grid[0][0] == "X" && grid[1][0] == "X" && grid[2][0] == "X")
		return X_WON;
	if (grid[0][1] == "X" && grid[1][1] == "X" && grid[2][1] == "X")
		return X_WON;
	if (grid[0][2] == "X" && grid[1][2] == "X" && grid[2][2] == "X")
		return X_WON;
	// X wins diagonally
	if (grid[0][0] == "X" && grid[1][1] == "X" && grid[2][2] == "X")
		return X_WON;
	if (grid[0][2] == "X" && grid[1][1] == "X" && grid[2][0] == "X")
		return X_WON;

	// O win conditions
	// O wins by rows
	if (grid[0][0] == "O" && grid[0][1] == "O" && grid[0][2] == "O")
		return O_WON;
	if (grid[1][0] == "O" && grid[1][1] == "O" && grid[1][2] == "O")
		return O_WON;
	if (grid[2][0] == "O" && grid[2][1] == "O" && grid[2][2] == "O")
		return O_WON;
	// O wins by columns
	if (grid[0][0] == "O" && grid[1][0] == "O" && grid[2][0] == "O")
		return O_WON;
	if (grid[0][1] == "O" && grid[1][1] == "O" && grid[2][1] == "O")
		return O_WON;
	if (grid[0][2] == "O" && grid[1][2] == "O" && grid[2][2] == "O")
		return O_WON;
	// O wins diagonally
	if (grid[0][0] == "O" && grid[1][1] == "O" && grid[2][2] == "O")
		return O_WON;
	if (grid[0][2] == "O" && grid[1][1] == "O" && grid[2][0] == "O")
		return O_WON;
	else
	{
		// Done checking for X_WON(0) and O_WON(1)
		// Now check for DRAW(2) or UNIFINISHED(3)
	
		for (int row = 0; row < 3; row++)
		{
			for (int column = 0; column < 3; column++)
			{
				if (grid[row][column] == ".")
					return UNFINISHED;
			}
		}

		return DRAW;
	}

}

// Function that visibly prints the current Board over three lines
void Board::print()
{
	std::cout << grid[0][0] << grid[0][1] << grid[0][2] << std::endl;
	std::cout << grid[1][0] << grid[1][1] << grid[1][2] << std::endl;
	std::cout << grid[2][0] << grid[2][1] << grid[2][2] << std::endl;
}