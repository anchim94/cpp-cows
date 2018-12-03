#include "pch.h"
#include "Node.h"
#include <iostream>


Node::Node()
{
}



Node::~Node()
{
}


void Node::climb(Node* ptr)
{
	if (ptr->weight() > this->weight())
	{
		prev->next = ptr;
		ptr->next = this;
		ptr->prev = prev;
		this->prev = ptr;
	}
	else
	{
		if (next != nullptr)
		{
			next->climb(ptr);
		}
		else
		{
			next = ptr;
			ptr->prev = this;
		}
	}


}
