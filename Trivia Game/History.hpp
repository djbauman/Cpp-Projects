#pragma once
#include "Room.hpp"

class History :public Room
{
protected:
	Player* player;
	bool cleared = false;
public:
	History(Player*);
	void play();
};
