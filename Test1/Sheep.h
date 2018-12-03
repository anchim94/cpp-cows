#pragma once
#include "Node.h"
class Sheep :
	public Node
{
public:
	Sheep();
	virtual ~Sheep();
	virtual void print();
	virtual int weight();
};

