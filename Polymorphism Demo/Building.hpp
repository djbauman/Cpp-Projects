/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains declarations for the Building class.
*********************************************************************/
#pragma once
#include "Person.hpp"

class Building
{
private:
	// Building variables
	std::string name;
	std::string address;
	int size;

public:
	// Building constructor
	Building(std::string nameIn, std::string addressIn, int sizeIn);
	
	// Building set functions
	void setName(std::string nameIn);	
	void setAddress(std::string addressIn);
	void setSize(int sizeIn);

	// Building get functions
	std::string getName();	
	std::string getAddress();
	int getSize();
	
	// Destructor
	~Building();
};

