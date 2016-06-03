#include "Factory.h"
#include <vector>

using namespace std;

class Series {
public:

	void AddFigure(char ID)
	{
		_figures.push_back(FacFig.CreateFigure(ID));//создание фигуры заданного типа
	}

	void SetFigureInfo()//установка для данной фигуры ее параметров
	{
		int index = _figures.size() - 1;
		_figures[index]->SetCharacteristic(index);
	}

	double GetAreaOneFigure(int n) const //получение площади фигуры
	{
		int inx = n - 1;
		return _figures[inx]->GetArea();
	}

	double GetVolumeOneFigure(int n) const//получение объема фигуры
	{
		int inx = n - 1;
		return _figures[inx]->GetVolume();
	}

	char GetFigureID(int inx)const//получение ID фигуры P – параллелепипед, C – конус, S – сфера, R - пирамида
	{
		return _figures[inx]->GetId();
	}

	~Series()
	{
	}

private:
	vector <Body*> _figures;
	Factory FacFig;
};
