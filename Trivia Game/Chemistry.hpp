#pragma once
#include "Room.hpp"

class Chemistry :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Chemistry(Player*);
	void play();
};
