#pragma once
#include "Room.hpp"

class Mythology :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Mythology(Player*);
	void play();
};
