/*********************************************************************
* Author: Daniel Bauman
* Date: 6/30/2017
* Description: This .cpp file contains function definitions for Board
* class objects (See Board.hpp for function comments).
*********************************************************************/
#include "board.hpp"

Board::Board()
{
	grid = new char*[width];
	for (int i = 0; i < width; i++)
	{
		grid[i] = new char[height];
	}

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			grid[i][j] = ' ';
		}
		std::cout << std::endl;
	}

	turns = 20;
}

Board::Board(int numRows, int numColumns, int numTurns)
{
	grid = new char*[numRows];
	for (int i = 0; i < numRows; i++)
	{
		grid[i] = new char[numColumns];
	}

	width = numRows;
	height = numColumns;

	for (int i = 0; i < numRows; i++)
	{
		for (int j = 0; j < numColumns; j++)
		{
			grid[i][j] = ' ';
		}
		std::cout << std::endl;
	}

	turns = numTurns;

}

int Board::getWidth()
{
	return width;
}

int Board::getHeight()
{
	return height;
}

int Board::getTurns()
{
	return turns;
}

void Board::placeAnt(Ant* ant, int xStart, int yStart, direction facingStart)
{
	oliver = ant;
	oliver->setX(xStart);
	oliver->setY(yStart);
	oliver->setFacing(facingStart);
}

void Board::moveAnt()
{
	if (grid[oliver->getX()][oliver->getY()] == ' ')
	{
		oliver->turnRight();
		grid[oliver->getX()][oliver->getY()] = '#';

	}
	else if (grid[oliver->getX()][oliver->getY()] == '#')
	{
		oliver->turnLeft();
		grid[oliver->getX()][oliver->getY()] = ' ';
	}

	// Change the Ant's coordinates left/right/up/down 
	// one space depending on the direction Oliver is facing.
	if (oliver->getFacing() == NORTH)
	{
		oliver->setY((oliver->getY() - 1));
	}
	else if (oliver->getFacing() == EAST)
	{
		oliver->setX((oliver->getX()) + 1);
	}
	else if (oliver->getFacing() == SOUTH)
	{
		oliver->setY((oliver->getY()) + 1);
	}
	else if (oliver->getFacing() == WEST)
	{
		oliver->setX((oliver->getX()) - 1);
	}

	// Check if X or Y coordinate are beyond the board's size,
	// and wrap around the edge if so.

	if (oliver->getX() > width - 1)
	{
		oliver->setX(0);
	}

	if (oliver->getX() < 0)
	{
		oliver->setX(width - 1);
	}

	if (oliver->getY() < 0)
	{
		oliver->setY(height - 1);
	}

	if (oliver->getY() > height - 1)
	{
		oliver->setY(0);
	}

}

void Board::printBoard() // Record color where the ant currently is; temporarily replace the spot with ant; print board; change space back to original value
{
	char color = ' ';											// Variable to store color
	if (grid[oliver->getX()][oliver->getY()] == ' ')
	{
		color = ' ';
	}
	else if (grid[oliver->getX()][oliver->getY()] == '#')
	{
		color = '#';
	}

	grid[oliver->getX()][oliver->getY()] = '@';					// Temporarily change the Ant's location to display "@"

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	grid[oliver->getX()][oliver->getY()] = color;

}

void Board::deleteBoard()
{
	for (int i = 0; i < width; i++)
	{
		delete[] grid[i];
	}

	delete[] grid;
}