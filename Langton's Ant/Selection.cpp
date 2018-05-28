/*********************************************************************
** Program name:
** Author:
** Date: 6/30/2017
** Description: This .cpp file defines functions for Selection class
** objects.
**********************************************************************/
#include "Selection.hpp"

Selection::Selection(std::string titleIn)
{
	title = titleIn;

}

std::string Selection::getTitle()
{
	return title;
}