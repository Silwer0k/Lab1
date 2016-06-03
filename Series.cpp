#include "Factory.h"
#include <vector>

using namespace std;

class Series {
public:

	void AddFigure(char ID)
	{
		_figures.push_back(FacFig.CreateFigure(ID));
	}

	void SetFigureInfo()
	{
		int index = _figures.size() - 1;
		_figures[index]->SetCharacteristic(index);
	}

	double GetAreaOneFigure(int n) const
	{
		int inx = n - 1;
		return _figures[inx]->GetArea();
	}

	double GetVolumeOneFigure(int n) const
	{
		int inx = n - 1;
		return _figures[inx]->GetVolume();
	}

	char GetFigureID(int inx)const
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