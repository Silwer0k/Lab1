#include "UserInteractor.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	UserInteractor UI;
	Series ArrayOfFigures;
	UI.AddFigures(ArrayOfFigures);
	UI.InteractionMenu(ArrayOfFigures);
	return 0;
}