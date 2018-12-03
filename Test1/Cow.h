#pragma once
#include "Node.h"
class Cow :
	public Node
{
public:
	Cow();
	virtual ~Cow();
	virtual int weight();
};

