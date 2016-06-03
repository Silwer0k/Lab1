#include "UserInteractor.h"
#include <iostream>


	const Series& UserInteractor::AddFigures(Series& Ser)
	{
		cout << "Ввод фигур..." << endl;
		char answer;
		//||
		do
		{
			cout << "Добавление параллепипеда..." << endl;
			Ser.AddFigure('P');
			cout << "Введите информацию о парралепипеде: " << endl;
			Ser.SetFigureInfo();
			cout << "Закончить ввод параллепипедов? (Y - закончить, любой символ - продолжить )" << endl;
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		do //||
		{
			cout << "Добавление конуса..." << endl;
			Ser.AddFigure('C');
			cout << "Введите информацию о конусе: " << endl;
			Ser.SetFigureInfo();
			cout << "Закончить ввод конусов? (Y - закончить, любой символ - продолжить )";
			cin >> answer;
		} while ((answer != 'Y'));
		answer = 0;
		do //||
		{
			cout << "Добавление сфер..." << endl;
			Ser.AddFigure('S');
			cout << "Введите информацию о сфере: " << endl;
			Ser.SetFigureInfo();
			cout << "Закончить ввод сфер? (Y - закончить, любой символ - продолжить )";
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		 //||
		do
		{
			cout << "Добавление пирамид..." << endl;
			Ser.AddFigure('R');
			cout << "Введите информацию о пирамиде: " << endl;
			Ser.SetFigureInfo();
			cout << "Закончить ввод пирамид? (Y - закончить, любой символ - продолжить ) ";
			cin >> answer;
		} while (answer != 'Y');
		return Ser;
	}

	void UserInteractor::InteractionMenu(const Series& Ser)
	{
		char index_command;
		do
		{
			cout << "Что сделать?... " << endl;
			cout << "1 - Посчитать площадь поверхности одной фигуры" << endl;
			cout << "2 - Посчитать объем одной фигуры" << endl;
			cout << "0 - Выход" << endl;
			cin >> index_command;
			switch (index_command)
			{
			case '1':
			{
				OutputArea(Ser);
			}
			break;
			case '2':
			{
				OutputVolume(Ser);
			}
			break;
			default:
			{
				cout << "Неправильный индекс команды..." << endl;
			}
			}
		} while (index_command != '0');

	}

	void UserInteractor::OutputArea(const Series& Ser)
	{
		cout << "Введите номер фигуры" << endl;
		int inx;
		char id;
		cout << "Порядковый номер фигуры: ";
		cin >> inx;
		double area = Ser.GetAreaOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (area == 0.0)
			std::cout << "Неверный индификатор фигуры" << std::endl;
		if (id == 'P')
			std::cout << "Полная поверхность параллепипеда #" << inx << " равна " << area << std::endl;
		if (id == 'C')
			std::cout << "Полная поверхность конуса #" << inx << " равна " << area << std::endl;
		if (id == 'S')
			std::cout << "Полная поверхность сферы #" << inx << " равна " << area << std::endl;
		if (id == 'R')
			std::cout << "Полная поверхность пирамиды #" << inx << " равна " << area << std::endl;
	}

	void UserInteractor::OutputVolume(const Series& Ser)
	{
		cout << "Введите номер фигуры" << endl;
		int inx;
		char id;
		cout << "Порядковый номер фигуры: ";
		cin >> inx;
		double volume = Ser.GetVolumeOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (volume == 0.0)
			std::cout << "Неверный индификатор фигуры" << std::endl;
		if (id == 'P')
			std::cout << "Объем параллепипеда #" << inx << " равна " << volume << std::endl;
		if (id == 'C')
			std::cout << "Объем поверхность конуса #" << inx << " равна " << volume << std::endl;
		if (id == 'S')
			std::cout << "Объем поверхность сферы #" << inx << " равна " << volume << std::endl;
		if (id == 'R')
			std::cout << "Объем поверхность пирамиды #" << inx << " равна " << volume << std::endl;
	}