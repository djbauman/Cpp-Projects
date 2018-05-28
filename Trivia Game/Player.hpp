/*********************************************************************
* Author: Daniel Bauman
* Date: August 12, 2017
* Description: This file contains declarations for the Player
* class.
*********************************************************************/
#pragma once
#include <vector>
#include "Room.hpp"

class Player
{
protected:
	std::vector<std::string> inventory;
	int mistakes = 0;
	bool playerWon = 0;
	int steps = 0;

public:
	Player();
	
	void add(std::string);
	void addMistake();
	int getMistakes();
	void showStatus();
	int checkInv();
	bool checkPlayerWon();
	void setPlayerWon();
	void addStep(int);
	int getSteps();

};

