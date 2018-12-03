#include "pch.h"
#include "Base.h"
#include <iostream>

Base::Base()
{
}


Base::~Base()
{
}


int Base::weight()
{
	return 1000000;
}


void Base::print()
{
	if (next != nullptr) next->print();
}
