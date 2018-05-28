#pragma once
#include "Room.hpp"

class Math :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Math(Player*);
	void play();
};
