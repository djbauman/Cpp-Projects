/*********************************************************************
* Author: Daniel Bauman
* Date: July 26, 2017
* Description: This file defines the triangleSum() function.
*********************************************************************/
#include "triangleSum.hpp"

int triangleSum(int N)
{
	if (N == 0)
	{
		return 0;
	}
	else
	{
		return N + triangleSum(N - 1);
	}

}
