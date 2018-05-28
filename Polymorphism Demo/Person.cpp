/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains definitions for the Person class
* and Person sub-classes Student and Instructor.
*
*********************************************************************/
#include "Person.hpp"


std::string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

void Person::setName(std::string nameIn)
{
	name = nameIn;
}

void Person::setAge(int ageIn)
{
	age = ageIn;
}

void Person::getGrade()
{
	return;
}

void Person::do_work()					// This is a virtual member function
{
	return;
}

Person::~Person()
{
}


// Definitions for Person sub-class "Student"

Student::Student(std::string nameIn)
{
	this->setName(nameIn);
	this->setAge((rand() % 6) + 18);
	this->setGpa((double)((rand()%15)+25)/10);

}

void Student::getGrade()
{
	std::cout << "GPA: " << gpa;
}

void Student::setGpa(double gpaIn)
{
	gpa = gpaIn;
}

void Student::do_work()
{
	std::cout << std::endl << this->getName() << " did " << (rand() % 8) + 1 << " hours of homework." << std::endl << std::endl;
}



// Definitions for Person sub-class "Instructor"

Instructor::Instructor(std::string nameIn)
{
	this->setName(nameIn);
	this->setAge((rand() % 50) + 18);
	this->setRating((double)((rand() % 51)+50) / 10);
}

void Instructor::getGrade()
{
	std::cout << "Instructor Rating: " << rating;
}

void Instructor::setRating(double ratingIn)
{
	rating = ratingIn;
}

void Instructor::do_work()
{
	std::cout << std::endl << this->getName() << " graded papers for " << (rand() % 8) + 1 << " hours." << std::endl << std::endl;
}