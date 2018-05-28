/*********************************************************************
* Author: Daniel Bauman
* Date: August 4 2017
* Description: This file contains definitions for the QueueNode
* struct and the Queue class.
*********************************************************************/

#include "Queue.h"

QueueNode::QueueNode(int val)
{
	value = val;
}

Queue::Queue()
{
	// When just starting, there are no nodes to point to
	front = nullptr;
	back = nullptr;
}

Queue::~Queue()
{
	if (front == nullptr)
	{
		return;
	}
	else
	{
		QueueNode* nodePtr1 = front;
		QueueNode* nodePtr2 = front;
		
		while (nodePtr1 != nodePtr2)
		{
			front = front->next;
			delete nodePtr1;
			nodePtr1 = front;
		}

		nodePtr1 = nullptr;
		nodePtr2 = nullptr;
		front = nullptr;
		back = nullptr;
	}
	
}

void Queue::addBack(int val)
{
	if (front == nullptr) // The list is empty, so we are adding our first node.
	{
		front = new QueueNode(val);
		back = front;
		front->next = back;
		front->prev = back;

		back->next = front;
		back->prev = front;

	}
	else // if there is 1 or more element already in the list...
	{
		QueueNode* temp = new QueueNode(val);
		
		back->next = temp;
		temp->prev = back;
		back = temp;
		back->next = front;
		front->prev = back;	
	}

}

int Queue::getFront()
{
	if (front == nullptr)
	{
		std::cout << "List is empty. No values to display." << std::endl << std::endl;
		return 0;
	}
	else
	{
		std::cout << "The first element of the list has value " << front->value << std::endl << std::endl;
		return front->value;
	}
}

void Queue::removeFront()
{
	if (front == nullptr)
	{
		std::cout << "List is empty. No values to remove." << std::endl << std::endl;
		return;
	}
	else if (front->next == front)
	{
		std::cout << "Removing first node..." << std::endl;
		front = nullptr;
		back = nullptr;
		std::cout << "Node removed." << std::endl << std::endl;
	}
	else
	{
		std::cout << "Removing first node..." << std::endl;
		front = front->next;
		front->prev = back;
		back->next = front;
		std::cout << "Node removed." << std::endl << std::endl;
	}
}

void Queue::print()
{
	if (front == nullptr)
	{
		std::cout << "No values to display.";
		return;
	}
	
	std::cout << "Displaying list contents: " << std::endl << std::endl;
	std::cout << front->value << std::endl;
	QueueNode* nodePtr = front->next;
	while (nodePtr != front)
	{
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}

