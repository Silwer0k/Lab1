#pragma once
#include "Figures.cpp"

class Factory
{
public:
	Body* CreateFigure(char ID);
};
