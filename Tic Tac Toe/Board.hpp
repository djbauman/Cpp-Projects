/*********************************************************************
* Author: Daniel Bauman
* Date: May 28, 2017
* Description: This header file contains the class declaration for
* the Board class.
*********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>
#include <string>

enum state {X_WON, O_WON, DRAW, UNFINISHED };

class Board
{
private:
	std::string grid[3][3];

public:
	Board();
	bool makeMove(int, int, int);
	state gameState(); // uses an enum data type declared above
	void print(); // prints board to screen

};
#endif