#pragma once
#include "Room.hpp"

class Physics :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Physics(Player*);
	void play();
};
