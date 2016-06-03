#pragma once
#include "Series.cpp"

class UserInteractor {
public:

	UserInteractor() {}

	const Series& AddFigures(Series& Ser);

	void InteractionMenu(const Series& Ser);

private:

	void OutputArea(const Series& Ser);

	void OutputVolume(const Series& Ser);
};