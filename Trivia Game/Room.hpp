#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Menu.hpp"
#include "getInput.hpp"
#include "Player.hpp"

class Room
{
protected:
	std::string name;
	Room* forward = nullptr;
	Room* back = nullptr;
	Room* left = nullptr;
	Room* right = nullptr;
	Room* gameOver = nullptr;

public:
	Room();
	void setName(std::string);
	void setForward(Room*);
	void setBack(Room*);
	void setLeft(Room*);
	void setRight(Room*);
	void setGameOver(Room*);

	virtual void play() = 0;

};

