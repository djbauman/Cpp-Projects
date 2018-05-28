#pragma once
#include "Room.hpp"

class Biology :public Room
{
protected:
	bool cleared = false;
	Player* player;
public:
	Biology(Player*);
	void play();
};
