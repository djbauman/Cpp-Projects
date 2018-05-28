#pragma once
#include "Room.hpp"

class Hall2 :public Room
{
protected:
	Player* player;

public:
	Hall2(Player*);
	void play();
};