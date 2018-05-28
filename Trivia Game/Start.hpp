#pragma once
#include "Room.hpp"

class Start :public Room
{
private:
	Player* player;
	bool cleared = false;
public:
	Start(Player*);
	void play();
};
