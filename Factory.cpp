#include "Factory.h"

Body* Factory:: CreateFigure(char ID)
{
	switch (ID)
	{
	case 'P':
	{
		return new Parallelepiped;
	}
	break;
	case 'C':
	{
		return new Cone;
	}
	break;
	case 'S':
	{
		return new Sphere;
	}
	break;
	case 'R':
	{
		return new Pyramide;
	}
	break;
	}
}