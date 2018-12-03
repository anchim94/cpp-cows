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
	std::cout << "NEXT: " << next << " PTR: " << ptr << std::endl;
	if (next != nullptr)
	{
		next->climb(ptr);
	}
	else
	{
		next = ptr;
	}

}
