/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file contains declarations for the Person class
* as well as its sub-classes, Student and Instructor.
* 
*********************************************************************/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "getInput.hpp"
#include "Menu.hpp"


class Person
{
private:
	// Person variables
	std::string name;
	int age;

public:

	// Get functions
	std::string getName();
	int getAge();

	// Set functions
	void setName(std::string);
	void setAge(int);
	
	// Virtual functions
	virtual void getGrade();							// Prints GPA for Student objects and Rating for Instructor objects
	virtual void do_work();								// Virtual: Prints one message for Students, and another for Instructors

	// Destructor
	~Person();
};


// Declarations for sub-classes "Student" and "Instructor"

class Student :public Person
{
private: 
	double gpa;

public:
	Student(std::string nameIn);						// Constructor for Student; takes name input, generates age and GPA within a certain range
	void setGpa(double gpaIn);
	void getGrade();
	void do_work();

};

class Instructor :public Person
{
private:
	double rating;

public:
	Instructor(std::string nameIn);					// Constructor for Instructor; takes name input, generates age and rating within a certain range
	void setRating(double ratingIn);
	void getGrade();
	void do_work();
};