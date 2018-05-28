#pragma once
#include "Room.hpp"

class End :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	End(Player*);
	void play();
};
