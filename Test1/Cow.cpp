#include "pch.h"
#include "Cow.h"
#include <iostream>


Cow::Cow()
{
}


Cow::~Cow()
{
}



int Cow::weight()
{
	return 10;
}


void Cow::print()
{
	printf("COW: %d\n", weight());
	if (next != nullptr)next->print();
}
