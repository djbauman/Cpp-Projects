/*********************************************************************
* Author: Daniel Bauman
* Date: July 17, 2017
* Description: This file contains definitions for the Item class.
*
*********************************************************************/
#include "Item.hpp"

Item::Item()
{
	name = "default";
	unit = "default";
	price = 0;
	quantity = 0;
}

Item::Item(std::string nameIn, std::string unitIn, int priceIn, int quantityIn)
{
	name = nameIn;
	unit = unitIn;
	price = priceIn;
	quantity = quantityIn;
}

std::string Item::getName()
{
	return name;
}

std::string Item::getUnit()
{
	return unit;
}

int Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}

int Item::getTotalPrice()
{
	return quantity*price;
}

void Item::setName(std::string nameIn)
{
	name = nameIn;
}

void Item::setUnit(std::string unitIn)
{
	unit = unitIn;
}

void Item::setPrice(int priceIn)
{
	price = priceIn;
}

void Item::setQuantity(int quantityIn)
{
	quantity = quantityIn;
}