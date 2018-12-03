#pragma once
#include "Node.h"
class Chicken :
	public Node
{
public:
	Chicken();
	virtual ~Chicken();
	virtual void print();
	virtual int weight();
};

