#pragma once
#include "Room.hpp"

class Geography :public Room
{
protected:
	Player* player;
	bool cleared = false;

public:
	Geography(Player*);
	void play();
};