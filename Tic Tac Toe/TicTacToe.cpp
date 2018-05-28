/*********************************************************************
* Author: Daniel Bauman
* Date: May 28, 2017
* Description: This file contains function definitions for the 
* TicTacToe class member functions, as well as a sample main()
* function.
*********************************************************************/
#include "TicTacToe.hpp"

// Class constructor for TicTacToe object
TicTacToe::TicTacToe(char startingPlayer)
{

	if (startingPlayer == 'x' || startingPlayer == 'X')
	{
		playersTurn = 1;
	}
	else if (startingPlayer == 'o' || startingPlayer == 'O')
	{
		playersTurn = 2;
	}
}


// Primary function that runs the game within a Tic Tac Toe object
void TicTacToe::play()
{
	int playerInput1;
	int playerInput2;
	
	while (gameBoard.gameState() == UNFINISHED)
	{
		if (playersTurn == 1)
		{
			std::cout << std::endl << "Player X: please enter your move." << std::endl;
			gameBoard.print();
		}
		else if (playersTurn == 2)
		{
			std::cout << std::endl << "Player O: please enter your move." << std::endl;
			gameBoard.print();
		}

		std::cout << std::endl;
	
		std::cin >> playerInput1 >> playerInput2; 
		
		// Check whether a legal input was made
		while ((playerInput1 < 0 || playerInput1 > 2) || (playerInput2 < 0 || playerInput2 > 2))
		{
			std::cout << "Illegal input. Please try again." << std::endl;
			std::cin >> playerInput1 >> playerInput2;
		}

		// Create bool variable legalMove
		bool legalMove = gameBoard.makeMove(playersTurn, playerInput1, playerInput2);

		// Validate input; ask for another input if input place is already taken
		if (!legalMove)
		{
			std::cout << "That place is already taken! Choose again." << std::endl;
		}
		
		if (legalMove)
		{
			if (playersTurn == 1)
			{
				playersTurn = 2;
			}
			else if (playersTurn == 2)
			{
				playersTurn = 1;
			}
		}

	}
	// Actions for when the WHILE loop exits - e.g. X wins, O wins, or there is a draw
	if (gameBoard.gameState() == 0) // X won
	{
		std::cout << std::endl;
		gameBoard.print();
		std::cout << std::endl << "X wins! Thanks for playing." << std::endl;
	}
	if (gameBoard.gameState() == 1) // O won
	{
		std::cout << std::endl;
		gameBoard.print();
		std::cout << std::endl << "O wins! Thanks for playing." << std::endl;
		
	}
	if (gameBoard.gameState() == 2) // Draw
	{
		std::cout << std::endl;
		gameBoard.print();
		std::cout << std::endl << "Draw. How boring!" << std::endl;
	}
}

// Main function to demonstrate the game
int main()
{
	char input = 'x';
	std::cout << "Welcome to Tic Tac Toe. Enter which player will go first. (X or O)" << std::endl << std::endl;
	std::cin >> input;

	while (!(input == 'X' || input == 'x' || input == 'O' || input == 'o'))
	{
		std::cout << "Please enter either X or O." << std::endl;
		std::cin >> input;
	}

	TicTacToe game(input);
	
	game.play();

	std::cin.ignore();
	std::cin.get();

	return 0;
}