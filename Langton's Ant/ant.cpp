/*********************************************************************
* Author: Daniel Bauman
* Date: 6/30/2017
* Description: This .cpp file contains function definitions for Ant
* class objects (See Ant.hpp for function comments).
*********************************************************************/
#include "ant.hpp"

Ant::Ant()
{
	setFacing(NORTH);
	setX(0);
	setY(0);
}

void Ant::setFacing(direction directionIn)
{
	facing = directionIn;
}

direction Ant::getFacing()
{
	return facing;
}

void Ant::setX(int xIn)
{
	currentX = xIn;
}

void Ant::setY(int yIn)
{
	currentY = yIn;
}

int Ant::getX()
{
	return currentX;
}

int Ant::getY()
{
	return currentY;
}

void Ant::turnRight()
{
	if (facing == NORTH)
	{
		setFacing(EAST);
	}
	else if (facing == EAST)
	{
		setFacing(SOUTH);
	}
	else if (facing == SOUTH)
	{
		setFacing(WEST);
	}
	else if (facing == WEST)
	{
		setFacing(NORTH);
	}
}

void Ant::turnLeft()
{
	if (facing == NORTH)
	{
		setFacing(WEST);
	}
	else if (facing == EAST)
	{
		setFacing(NORTH);
	}
	else if (facing == SOUTH)
	{
		setFacing(EAST);
	}
	else if (facing == WEST)
	{
		setFacing(SOUTH);
	}
}

