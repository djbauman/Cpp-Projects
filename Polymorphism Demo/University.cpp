/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains definitions for the University class.
*
*********************************************************************/
#include "University.hpp"

University::University()
{
	name = "Oregon State University";
}

std::string University::getName()
{
	return name;
}

void University::addBuilding(Building* buildingIn)
{
	buildings.push_back(buildingIn);
}

void University::addPerson(Person* personIn)
{
	people.push_back(personIn);
}

void University::work(std::string nameIn)
{
	bool match = false;
	for (int i = 0; i < people.size(); i++)
	{
		if (people[i]->getName() == nameIn)
		{
			people[i]->do_work();
			match = true;
			return;
		}
	}
	std::cout << std::endl << "No one found with that name." << std::endl << std::endl;
}

void University::printPeople()
{
	std::cout << std::endl << "Campus members:" << std::endl << std::endl;
	for (int i = 0; i < people.size(); i++)
	{
		std::cout << people[i]->getName() << std::endl;
		std::cout << "Age: " << people[i]->getAge() << std::endl;
		people[i]->getGrade();
		std::cout << std::endl << std::endl;
	}
}

void University::printBuildings()
{
	std::cout << std::endl << "Campus Building Listing:" << std::endl << std::endl;
	for (int i = 0; i < buildings.size(); i++)
	{
		std::cout << buildings[i]->getName() << std::endl;
		std::cout << buildings[i]->getSize() << " sq. feet" << std::endl;
		std::cout << buildings[i]->getAddress() << std::endl << std::endl;
	}
}

University::~University()
{
}
