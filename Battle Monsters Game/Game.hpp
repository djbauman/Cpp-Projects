/*********************************************************************
* Author: Daniel Bauman
* Date: July 31, 2017
* Description: This file contains declarations for the Game
* class.
*********************************************************************/
#pragma once
#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"

class Game
{
private:
	Creature* player1;
	Creature* player2;

public:
	void play();

};

