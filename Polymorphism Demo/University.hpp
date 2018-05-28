/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains declarations for the University class.
*
*********************************************************************/
#pragma once

#include "Person.hpp"
#include "Building.hpp"

class University
{
private:
	std::string name;
	std::vector<Person*> people;							// Vector storing pointers to Person objects
	std::vector<Building*> buildings;					// Vector storing pointers to Building objects

public:
	// Constructor
	University();
	
	std::string getName();										// Returns the university's name
	void addPerson(Person* personIn);					// Adds a Person object from a pointer
	void addBuilding(Building* buildingIn);		// Adds a Building object from a pointer

	void work(std::string nameIn);						// Calls do_work for Person objects

	void printPeople();												// Print info of all Persons
	void printBuildings();										// Print info of all Buildings



	// Destructor
	~University();
};

