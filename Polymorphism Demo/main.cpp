/*********************************************************************
* Author: Daniel Bauman
* Date: July 19, 2017
* Description: This file creates some Buildings, Students, and 
* Instructors, adds them to a University object, and displays a 
* Menu for the user to choose from.
*********************************************************************/
#include "University.hpp"

int main()
{
	srand(time(NULL));

	std::cout << "Welcome to OSU_Info_Database_v1.3" << std::endl << std::endl;
	std::cout << "Please choose from the menu options below." << std::endl << std::endl;

	// Variables for user input
	std::string worker;
	

	// Create Building, Student, and Instructor objects
	Building building1("Dixon Recreation Center", "425 SW 26th St Corvallis, OR 97331", 173776);
	Building building2("Aero Engineering Lab", "852 SW 30th St Corvallis, OR 97331", 3637);
	Building* building1Ptr = &building1;
	Building* building2Ptr = &building2;

	Student student1("Steve");
	Student student2("April");
	Student* student1Ptr = &student1;
	Student* student2Ptr = &student2;

	Instructor teacher1("Dr. Tyson");
	Instructor teacher2("Prof. Hargreaves");
	Instructor* teacher1Ptr = &teacher1;
	Instructor* teacher2Ptr = &teacher2;

	// Create University object
	University university1;

	// Populate University vectors with Building and Person objects
	university1.addBuilding(building1Ptr);
	university1.addBuilding(building2Ptr);

	university1.addPerson(student1Ptr);
	university1.addPerson(student2Ptr);

	university1.addPerson(teacher1Ptr);
	university1.addPerson(teacher2Ptr);
	
	// Create menu options
	Selection option1("1) View buildings");
	Selection option2("2) View university population");
	Selection option3("3) Put someone to work");
	Selection option4("4) Quit");
	Selection* option1Ptr = &option1;
	Selection* option2Ptr = &option2;
	Selection* option3Ptr = &option3;
	Selection* option4Ptr = &option4;
	
	// Build and display main menu
	Menu mainMenu;
	mainMenu.add(option1Ptr);
	mainMenu.add(option2Ptr);
	mainMenu.add(option3Ptr);
	mainMenu.add(option4Ptr);

	while (true)
	{
		std::cout << "Main Menu" << std::endl;
		mainMenu.displayMenu();
		mainMenu.makeChoice();

		if (mainMenu.getChoice() == 1)
		{
			university1.printBuildings();
		}
		if (mainMenu.getChoice() == 2)
		{
			university1.printPeople();
		}
		if (mainMenu.getChoice() == 3)
		{
			std::cout << "Type the name of the person who will work (case sensitive): ";
			getString(&worker);
			university1.work(worker);
		}
		if (mainMenu.getChoice() == 4)
		{
			return 0;
		}
	}

	return 0;
}