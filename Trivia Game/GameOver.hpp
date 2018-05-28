#pragma once
#include "Room.hpp"

class GameOver :public Room
{
protected:
	Player* player;
	

public:
	GameOver(Player*);
	void play();
};