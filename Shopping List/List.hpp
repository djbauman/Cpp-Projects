/*********************************************************************
* Author: Daniel Bauman
* Date: July 17, 2017
* Description: This file contains declarations for the List class.
*
*********************************************************************/
#ifndef LIST_HPP
#define LIST_HPP
#include "Item.hpp"

class List
{
private:
	Item* shoppingList;
	int arraySize;

public:
	List();																// Default List constructor; dynamically allocates Item[4] array
	void add(Item);														// Adds new Item object to shoppingList (creates larger shoppingList, deletes old one)
	void remove(std::string);											// ??? Does this need to take parameter pointer-to-Item ???
	void showList();													// Prints current contents of shoppingList
	~List();															// Destructor; deletes shoppingList

	friend bool operator== (Item item1, Item item2);					// Overload function for the "==" operator, to compare Item names
	
};


#endif
