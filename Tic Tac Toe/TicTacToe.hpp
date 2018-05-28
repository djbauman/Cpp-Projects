/*********************************************************************
* Author: Daniel Bauman
* Date: May 28, 2017
* Description: This header file contains the class declaration for
* the TicTacToe class.
*********************************************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"

class TicTacToe
{
private:
	Board gameBoard;
	int playersTurn;

public:
	TicTacToe(char);
	void play();

};
#endif
