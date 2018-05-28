#pragma once
#include "Room.hpp"

class Hall1 :public Room
{
protected:
	Player* player;
public:
	Hall1(Player*);
	void play();
};