/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This header file contains the class declaration for
* the Game class.
*********************************************************************/
#ifndef GAME_HPP
#define GAME_HPP

#include "LoadedDie.hpp"

class Game
{
private:
	int turns;					// Number of turns to be played
	bool p1Loaded = false;		// Whether Player 1 is using a loaded die
	bool p2Loaded = false;		// Whether Player 2 is using a loaded die
	int p1Sides;				// Number of sides on Player 1's die
	int p2Sides;				// Number of sides on Player 2's die
	int p1Total = 0;			// Total score for Player 1
	int p2Total = 0;			// Total score for Player 2

public:
	int getP1Total();			// Returns Player 1's total score
	int getP2Total();			// Returns Player 2's total score
	void showState();			// Displays current player totals
	void play();				// Gets inputs for starting conditions and runs the game


};
#endif