/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains definitions for the Building class.
*********************************************************************/
#include "Building.hpp"


Building::Building(std::string nameIn, std::string addressIn, int sizeIn)
{
	name = nameIn;
	address = addressIn;
	size = sizeIn;
}

void Building::setName(std::string nameIn)
{
	name = nameIn;
}

void Building::setAddress(std::string addressIn)
{
	address = addressIn;
}

void Building::setSize(int sizeIn)
{
	size = sizeIn;
}

std::string Building::getName()
{
	return name;
}

std::string Building::getAddress()
{
	return address;
}

int Building::getSize()
{
	return size;
}

Building::~Building()
{
}
