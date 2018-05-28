/*********************************************************************
* Author: Daniel Bauman
* Date: 6/30/2017
* Description: This .hpp file contains function declarations for
* Board class objects, and explanatory comments.
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>
#include <string>
#include "ant.hpp"

class Board
{
private:																
	char** grid;															// Dynamically allocated 2D array of some size, [x][x]
	int width = 20;															// Board width
	int height = 20;														// Board height
	Ant* oliver;															// Pointer to Ant object created within Board object
	int turns;																// Stores the number of moves to be made


public:
	Board();																// Default Board object constructor, makes a board of a default size
	Board(int numRows, int numColumns, int numTurns);						// Manual Board object constructor; takes int values for rows and colums; sets color of all spaces to white/blank;
	int getWidth();															// Returns width of the Board
	int getHeight();														// Returns height of the Board
	int getTurns();															// Returns number of turns
	void placeAnt(Ant* ant, int xStart, int yStart, direction facingStart);	// Associates pointer to ant with Board's internal "oliver" ant object, places ant at initial location and sets initial direction
	void moveAnt();															// Changes ant's direction, flips board square color, checks if ant is at an edge, then moves ant
	void printBoard();														// Prints board to console
	void deleteBoard();														// Frees memory allocated by Board creation
	

};

#endif