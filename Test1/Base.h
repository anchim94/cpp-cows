#pragma once
#include "Node.h"
class Base :
	public Node
{
public:
	Base();
	virtual ~Base();
	virtual int weight();
};

