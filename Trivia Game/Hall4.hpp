#pragma once
#include "Room.hpp"

class Hall4 :public Room
{
protected:
	Player* player;

public:
	Hall4(Player*);
	void play();
};