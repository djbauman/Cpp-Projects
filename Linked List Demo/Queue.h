/*********************************************************************
* Author: Daniel Bauman
* Date: August 4 2017
* Description: This file contains declarations for the QueueNode
* struct and the Queue class.
*********************************************************************/

#pragma once
#include<iostream>

struct QueueNode
{
	QueueNode(int val); 

	int value;						// The data value	
	QueueNode* next;				// A pointer to the next node
	QueueNode* prev;				// A pointer to the previous node
};


class Queue
{
private:
	QueueNode* front;				// Pointer to the first element in the list
	QueueNode* back;				// Pointer to the last element in the list

public:
	Queue();						// Constructor
	~Queue();						// Destructor

	void addBack(int val);			// adds item to the end of the queue
	int getFront();					// returns the value at the front of the queue
	void removeFront();				// removes the front item in the structure

	void print();					// Displays the list contents

};