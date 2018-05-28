/*********************************************************************
* Author: Daniel Bauman
* Date: July 17, 2017
* Description: This file contains definitions for the List class.
*
*********************************************************************/
#include "List.hpp"


List::List()
{
	shoppingList = new Item[4];
	arraySize = 0;
}

void List::add(Item itemIn)
{
	// Check whether the input Item is already on the list 
	// using the overloaded "==" operator to compare item names

	// Create menu for duplicate item detection
	Selection update("1) Update with new quantity.");
	Selection goBack("2) Go back.");
	Selection* updatePtr = &update;
	Selection* goBackPtr = &goBack;
	Menu dupItem;
	dupItem.add(updatePtr);
	dupItem.add(goBackPtr);

	for (int i = 0; i < arraySize; i++)
	{
		if (operator==(itemIn.getName(), shoppingList[i].getName()))
		{
			std::cout << "This item is already on your list." << std::endl;
			dupItem.displayMenu();
			dupItem.makeChoice();
			
			// If the user chooses menu option "1", replace the 
			// quantity of the current shopping item with the
			// new quantity and terminate the function.
			if (dupItem.getChoice() == 1)
			{
				shoppingList[i].setQuantity(itemIn.getQuantity());
				// shoppingList[i].setUnit(itemIn.getUnit());		 // Optional
				return;
			}
		}
	}

	if (arraySize < 4)
	{
		shoppingList[arraySize] = itemIn;
		arraySize++;
	}
	else if (arraySize >= 4)
	{
		// Create new temp array, 1 element larger than arraySize, 
		// copy objects into it, add new object at last position, and 
		// increment arraySize
		
		Item* tempList = new Item[arraySize + 1];

		for (int i = 0; i < arraySize; i++)
		{
			tempList[i].setName(shoppingList[i].getName());
			tempList[i].setUnit(shoppingList[i].getUnit());
			tempList[i].setPrice(shoppingList[i].getPrice());
			tempList[i].setQuantity(shoppingList[i].getQuantity());
		}

		delete[] shoppingList;

		shoppingList = tempList;
		arraySize++;
		shoppingList[arraySize - 1] = itemIn;

	}

}

void List::remove(std::string nameIn)
{
	// Loops to find same-name shoppingList element
	// If a match is found...
	// Create a new array, ONE element smaller, then copy the shoppingList values
	// into it up to the deleted value, then skip that element and fill in the rest.
	//
	// Encountered repeated crashes when trying to remove items from a small list.
	// Added a temporary workaround for this, rather than implementing the simpler 
	// but less functional "remove only the last item" function.


	for (int i = 0; i < arraySize; i++)
	{
		if (shoppingList[i].getName() == nameIn)
		{
			// Create a new array
			Item* tempList = new Item[100];			// Crude workaround to avoid crashes; needs improvement
			
			// For the case where we are deleting the first item on the list...
			if (i == 0)
			{
				for (int j = 0; j < arraySize - 1; j++)
				{
					tempList[j].setName(shoppingList[j+1].getName());
					tempList[j].setUnit(shoppingList[j+1].getUnit());
					tempList[j].setPrice(shoppingList[j+1].getPrice());
					tempList[j].setQuantity(shoppingList[j+1].getQuantity());
				}
			}

			// For the case where we are deleting the last element in the array...
			else if (i == arraySize - 1)
			{
				for (int j = 0; j < arraySize - 1; j++)
				{
					tempList[j].setName(shoppingList[j].getName());
					tempList[j].setUnit(shoppingList[j].getUnit());
					tempList[j].setPrice(shoppingList[j].getPrice());
					tempList[j].setQuantity(shoppingList[j].getQuantity());
				}
			}

			// Last, for the case where we are deleting some element in the middle...
			else if (i != 0 && i != arraySize - 1);
			{
				for (int j = 0; j < i; j++)
				{
					tempList[j].setName(shoppingList[j].getName());
					tempList[j].setUnit(shoppingList[j].getUnit());
					tempList[j].setPrice(shoppingList[j].getPrice());
					tempList[j].setQuantity(shoppingList[j].getQuantity());
				}

				for (int j = i; j < arraySize - 1; j++)
				{
					tempList[j].setName(shoppingList[j+1].getName());
					tempList[j].setUnit(shoppingList[j+1].getUnit());
					tempList[j].setPrice(shoppingList[j+1].getPrice());
					tempList[j].setQuantity(shoppingList[j+1].getQuantity());
				}
			}

			delete[] shoppingList;
			shoppingList = tempList;
			arraySize--;
			return;
		}
		std::cout << "No item with that name was found." << std::endl << std::endl;
		return;
	}
	std::cout << "The list is empty!" << std::endl << std::endl;
}

void List::showList()
{
	std::cout << "Current list" << std::endl << std::endl;

	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Item " << i + 1 << ":" << std::endl; 
		std::cout << shoppingList[i].getName() << " (" << shoppingList[i].getQuantity() << " " << shoppingList[i].getUnit() << ")" << std::endl;
		std::cout << "Price: $" << shoppingList[i].getTotalPrice() << std::endl;
		std::cout << std::endl;
	}
	
	// Calculate and display grand total
	int total = 0;
	for (int i = 0; i < arraySize; i++)
	{
		total += shoppingList[i].getTotalPrice();
	}

	std::cout << "Grand total: $" << total << std::endl;
	
	return;
}

List::~List()
{
	delete [] shoppingList;
}

bool operator==(Item item1, Item item2)
{
	return item1.getName() == item2.getName();
}