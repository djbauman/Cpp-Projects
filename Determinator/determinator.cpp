#include "determinator.hpp"

/******************************************************
determinant()
Takes 2 parameters, a pointer to a 2D array and
an integer equal of 2 or 3 for the size of the
array, and returns the determinant of the array.

Formula for determinant:

For a 2x2 array,

[a][b]
[c][d]

Determinant = ad - bc.

For a 3x3 array,

[a][b][c]
[d][e][f]
[g][h][i]

Determinant = a(ei - fh) - b(di - fg) + c(dh - eg).
*******************************************************/

int determinant(int **arrayPtr, int arraySize)
{
	int result;

	if (arraySize == 2)
	{
		result = (arrayPtr[0][0])*(arrayPtr[1][1])
			   - (arrayPtr[0][1])*(arrayPtr[1][0]);

		return result;
	}

	else if (arraySize == 3)
	{
		result = arrayPtr[0][0] * ((arrayPtr[1][1])*(arrayPtr[2][2]) - (arrayPtr[1][2])*(arrayPtr[2][1]))
			   - arrayPtr[0][1] * ((arrayPtr[1][0])*(arrayPtr[2][2]) - (arrayPtr[1][2])*(arrayPtr[2][0]))
			   + arrayPtr[0][2] * ((arrayPtr[1][0])*(arrayPtr[2][1]) - (arrayPtr[1][1])*(arrayPtr[2][0]));
	
		return result;
	}

	return 0;
}