#include "matrix.hpp"

/******************************************************
readMatrix()
Prompts the user to fill a square matrix, then stores 
their input into the 2D array passed to the function
*******************************************************/
void readMatrix(int **arrayPtr, int arraySize)
{
	// Take user inputs to fill the 2D array
	
	std::cout << "Please enter " << arraySize * arraySize << " integers." << std::endl;
	std::cout << "(Press [Enter] after each entry.)" << std::endl;

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			std::cin >> arrayPtr[i][j];
			// Input validation to force integer input
			while (std::cin.fail())
			{
				std::cout << "Please enter an integer." << std::endl;
				std::cin.clear();
				std::cin.ignore(256, '\n');
				std::cin >> arrayPtr[i][j];
			}
		}
	}
		
}