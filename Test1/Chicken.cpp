#include "pch.h"
#include "Chicken.h"
#include <iostream>

Chicken::Chicken()
{
}


Chicken::~Chicken()
{
}


void Chicken::print()
{
	printf("CHICKEN: %d\n", weight());
	if (next != nullptr)next->print();
}


int Chicken::weight()
{
	return 5;
}
