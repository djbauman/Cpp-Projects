#pragma once
#include "Room.hpp"

class Art :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Art(Player*);
	void play();
};
