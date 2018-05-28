#include "Room.hpp"

Room::Room()
{

}

void Room::setName(std::string nameIn)
{
	name = nameIn;
}

void Room::setForward(Room* fRoom)
{
	forward = fRoom;
}

void Room::setBack(Room* bRoom)
{
	back = bRoom;
}

void Room::setLeft(Room* lRoom)
{
	left = lRoom;
}

void Room::setRight(Room* rRoom)
{
	right = rRoom;
}

void Room::setGameOver(Room* gameOverIn)
{
	gameOver = gameOverIn;
}
