#pragma once
#include "Room.hpp"

class Hall3 :public Room
{
protected:
	Player* player;

public:
	Hall3(Player*);
	void play();
};