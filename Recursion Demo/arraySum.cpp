/*********************************************************************
* Author: Daniel Bauman
* Date: July 26, 2017
* Description: This file defines the arraySum() function. This
* function returns the sum of an array of integers.
*********************************************************************/#include "arraySum.hpp"


int arraySum(int array[], int arraySize)
{
	if (arraySize < 1)
	{
		return 0;
	}

	else
	{
		return array[arraySize-1] + arraySum(array, arraySize - 1);
	}

}