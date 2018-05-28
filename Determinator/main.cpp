/*********************************************************************
** Program name: Lab 1
** Author: Daniel Bauman
** Date: 6/26/2017
** Description: This program calculates the determinant of an array.
**              The user chooses either a 2x2 or 3x3 array and is 
**              prompted to input integers to fill the array.
**********************************************************************/
#include <string>
#include "matrix.hpp"
#include "determinator.hpp"

int main()
{
	int arraySizeChoice = 0;
	
	std::string userChoice;
	
	// Take user's choice for a 2x2 or 3x3 array,
	// forcing input of a string "2" or "3",
	// then convert that string to an integer.
	do
	{
		std::cout << "Please enter (2) for a 2x2 array or (3) for a 3x3 array." << std::endl;
		std::cin >> userChoice;
	} while (userChoice != "2" && userChoice != "3");

	arraySizeChoice = std::stoi(userChoice);
	
	
	// Dynamically allocate a 2D array of size 
	// 2x2 or 3x3 based on user's choice.
	int** array = new int*[arraySizeChoice];
	for (int i = 0; i < arraySizeChoice; i++)
	{
		array[i] = new int[arraySizeChoice];
	}
	
	
	// Run readMatrix(), taking the 2D array
	// and the array size as parameters
	readMatrix(array, arraySizeChoice);

	
	// Print the 2D array
	std::cout << std::endl;
	std::cout << "The array you entered is: " << std::endl << std::endl;
	for (int i = 0; i < arraySizeChoice; i++)
	{
		for (int j = 0; j < arraySizeChoice; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// Calculate and print the determinant.
	std::cout << std::endl << "The array's determinant is " << determinant(array, arraySizeChoice) << "." << std::endl << std::endl;
		
	// Free allocated memory
	for (int i = 0; i < arraySizeChoice; i++)
		{
			delete[] array[i];
		}

	delete[] array;

		std::cin.ignore();
		std::cout << "Press [Enter] to quit." << std::endl;
		std::cin.get();
		

		return 0;
	
}