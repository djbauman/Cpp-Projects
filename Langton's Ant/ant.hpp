/*********************************************************************
* Author: Daniel Bauman
* Date: 6/30/2017
* Description: This .hpp file contains function declarations for
* Ant class objects, and explanatory comments.
*********************************************************************/
#ifndef ANT_HPP
#define ANT_HPP

enum direction { NORTH, EAST, SOUTH, WEST };

class Ant
{
private:
	
	int currentX = 0;									// Integer storing Ant's X value
	int currentY = 0;									// Integer storing Ant's Y value
	direction facing = NORTH;

public:
	
	Ant();																		// Ant constructor
	void setFacing(direction directionIn);		// sets the Ant's direction
	direction getFacing();										// gets the Ant's current direction (does this work? need to check)
	void setX(int xIn);												// sets the Ant's X position
	void setY(int yIn);												// sets the Ant's Y position
	int getX();																// returns the Ant's current X position
	int getY();																// returns the Ant's current Y position
	void turnRight();													// Turns the Ant's direction 'right' relative to current direction
	void turnLeft();													// Turns the Ant's direction 'left' relative to current direction

};

#endif