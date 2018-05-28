/*********************************************************************
* Author: Daniel Bauman
* Date: 7/11/2017
* Description: This .cpp file contains function definitions for
* the Game class.
*********************************************************************/
#include "Game.hpp"

int Game::getP1Total()
{
	return p1Total;
}

int Game::getP2Total()
{
	return p2Total;
}

void Game::showState()
{
	std::cout << "Current score: Player 1 has " << p1Total << " and Player 2 has " << p2Total << std::endl;
}

void Game::play()
{
	// Create menu items for die type choice
	Selection die1("1) Normal die.");
	Selection die2("2) Loaded die.");
	Selection* die1Ptr = &die1;
	Selection* die2Ptr = &die2;

	// Prompt Player 1 for die type
	std::cout << "What type of die will Player 1 use?" << std::endl;
	Menu p1DieChoice;
	p1DieChoice.add(die1Ptr);
	p1DieChoice.add(die2Ptr);
	p1DieChoice.displayMenu();
	p1DieChoice.makeChoice();

	// Set Player 1's loaded status
	if (p1DieChoice.getChoice() == 1)
	{
		p1Loaded = false;
	}
	else if (p1DieChoice.getChoice() == 2)
	{
		p1Loaded = true;
	}

	// Prompt Player 2 for die type
	std::cout << "What type of die will Player 2 use?" << std::endl;
	Menu p2DieChoice;
	p2DieChoice.add(die1Ptr);
	p2DieChoice.add(die2Ptr);
	p2DieChoice.displayMenu();
	p2DieChoice.makeChoice();

	// Set Player 2's loaded status
	if (p2DieChoice.getChoice() == 1)
	{
		p2Loaded = false;
	}
	else if (p2DieChoice.getChoice() == 2)
	{
		p2Loaded = true;
	}

	// Create menu items for side choice
	Selection sides1("How many sides will Player 1's die have?");
	Selection sides2("How many sides will Player 2's die have?");
	Selection* sides1Ptr = &sides1;
	Selection* sides2Ptr = &sides2;

	Menu p1SideChoice;
	p1SideChoice.add(sides1Ptr);
	p1SideChoice.displayMenu();
	p1SideChoice.makeCustomChoice(1, 100);
	p1Sides = p1SideChoice.getChoice();

	Menu p2SideChoice;
	p2SideChoice.add(sides2Ptr);
	p2SideChoice.displayMenu();
	p2SideChoice.makeCustomChoice(1, 100);
	p2Sides = p2SideChoice.getChoice();


	Selection numOfTurns("How many rounds will be played?");
	Selection* turnsPtr = &numOfTurns;

	Menu turnsChoice;
	turnsChoice.add(turnsPtr);
	turnsChoice.displayMenu();
	turnsChoice.makeCustomChoice(1, 200);
	turns = turnsChoice.getChoice();
	
	// Create the correct die objects
	Die player1Fair(p1Sides);
	Die player2Fair(p1Sides);
	LoadedDie player1Unfair(p1Sides);
	LoadedDie player2Unfair(p1Sides);

	int currentTurn = 1;

	while (currentTurn <= turns)
	{
		std::cout << "Turn " << currentTurn << " of " << turns << std::endl;
		if (p1Loaded)
		{
			std::cout << "Player 1 rolled a " << p1Sides << "-sided loaded die and got " << player1Unfair.rollDie() << std::endl;
			p1Total += player1Unfair.getLastRoll();
		}
		else
		{
			std::cout << "Player 1 rolled a " << p1Sides << "-sided fair die and got " << player1Fair.rollDie() << std::endl;
			p1Total += player1Fair.getLastRoll();
		}
		if (p2Loaded)
		{
			std::cout << "Player 2 rolled a " << p1Sides << "-sided loaded die and got " << player2Unfair.rollDie() << std::endl;
			p2Total += player2Unfair.getLastRoll();
		}
		else
		{
			std::cout << "Player 2 rolled a " << p1Sides << "- sided fair die and got " << player2Fair.rollDie() << std::endl;
			p2Total += player2Fair.getLastRoll();
		}
	
		std::cout << std::endl;
		showState();

		currentTurn++;
		std::cin.get();
	}

	if (p1Total > p2Total)
	{
		std::cout << "Game complete. Player 1 wins!" << std::endl;
	}
	else if (p2Total > p1Total)
	{
		std::cout << "Game complete. Player 2 wins!" << std::endl;
	}
	else if (p1Total == p2Total)
	{
		std::cout << "Wow! It's a tie!" << std::endl;
	}
}
