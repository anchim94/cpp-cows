#include "pch.h"
#include "Sheep.h"
#include <iostream>

Sheep::Sheep()
{
}


Sheep::~Sheep()
{
}


void Sheep::print()
{
	printf("SHEEP: %d\n", weight());
	if (next != nullptr)next->print();
}


int Sheep::weight()
{
	return 7;
}
