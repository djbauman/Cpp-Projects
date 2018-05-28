/*********************************************************************
* Author: Daniel Bauman
* Date: July 17, 2017
* Description: This file contains declarations for the Item class.
*
*********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>
#include "getInput.hpp"
#include "Menu.hpp"

class Item
{
private:
	std::string name;
	std::string unit;
	int price;
	int quantity;

public:
	// Constructors
	Item();																		// Default constructor
	Item(std::string name, std::string unit, int price, int quantity);			// Manual constructor
	
	// Get functions
	std::string getName();														// Returns name
	std::string getUnit();														// Returns unit
	int getPrice();																// Returns price
	int getQuantity();															// Returns quantity
	int getTotalPrice();														// Calculates and returns price * quantity

	// Set functions
	void setName(std::string nameIn);											// Sets the name
	void setUnit(std::string unitIn);											// Sets the unit
	void setPrice(int priceIn);													// Sets the price
	void setQuantity(int quantityIn);											// Sets the quantity

};
#endif