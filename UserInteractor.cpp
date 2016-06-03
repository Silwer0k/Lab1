#include "UserInteractor.h"
#include <iostream>


	const Series& UserInteractor::AddFigures(Series& Ser)
	{
		cout << "���� �����..." << endl;
		char answer;
		//||
		do
		{
			cout << "���������� �������������..." << endl;
			Ser.AddFigure('P');
			cout << "������� ���������� � �������������: " << endl;
			Ser.SetFigureInfo();
			cout << "��������� ���� ��������������? (Y - ���������, ����� ������ - ���������� )" << endl;
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		do //||
		{
			cout << "���������� ������..." << endl;
			Ser.AddFigure('C');
			cout << "������� ���������� � ������: " << endl;
			Ser.SetFigureInfo();
			cout << "��������� ���� �������? (Y - ���������, ����� ������ - ���������� )";
			cin >> answer;
		} while ((answer != 'Y'));
		answer = 0;
		do //||
		{
			cout << "���������� ����..." << endl;
			Ser.AddFigure('S');
			cout << "������� ���������� � �����: " << endl;
			Ser.SetFigureInfo();
			cout << "��������� ���� ����? (Y - ���������, ����� ������ - ���������� )";
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		 //||
		do
		{
			cout << "���������� �������..." << endl;
			Ser.AddFigure('R');
			cout << "������� ���������� � ��������: " << endl;
			Ser.SetFigureInfo();
			cout << "��������� ���� �������? (Y - ���������, ����� ������ - ���������� ) ";
			cin >> answer;
		} while (answer != 'Y');
		return Ser;
	}

	void UserInteractor::InteractionMenu(const Series& Ser)
	{
		char index_command;
		do
		{
			cout << "��� �������?... " << endl;
			cout << "1 - ��������� ������� ����������� ����� ������" << endl;
			cout << "2 - ��������� ����� ����� ������" << endl;
			cout << "0 - �����" << endl;
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
				cout << "������������ ������ �������..." << endl;
			}
			}
		} while (index_command != '0');

	}

	void UserInteractor::OutputArea(const Series& Ser)
	{
		cout << "������� ����� ������" << endl;
		int inx;
		char id;
		cout << "���������� ����� ������: ";
		cin >> inx;
		double area = Ser.GetAreaOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (area == 0.0)
			std::cout << "�������� ����������� ������" << std::endl;
		if (id == 'P')
			std::cout << "������ ����������� ������������� #" << inx << " ����� " << area << std::endl;
		if (id == 'C')
			std::cout << "������ ����������� ������ #" << inx << " ����� " << area << std::endl;
		if (id == 'S')
			std::cout << "������ ����������� ����� #" << inx << " ����� " << area << std::endl;
		if (id == 'R')
			std::cout << "������ ����������� �������� #" << inx << " ����� " << area << std::endl;
	}

	void UserInteractor::OutputVolume(const Series& Ser)
	{
		cout << "������� ����� ������" << endl;
		int inx;
		char id;
		cout << "���������� ����� ������: ";
		cin >> inx;
		double volume = Ser.GetVolumeOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (volume == 0.0)
			std::cout << "�������� ����������� ������" << std::endl;
		if (id == 'P')
			std::cout << "����� ������������� #" << inx << " ����� " << volume << std::endl;
		if (id == 'C')
			std::cout << "����� ����������� ������ #" << inx << " ����� " << volume << std::endl;
		if (id == 'S')
			std::cout << "����� ����������� ����� #" << inx << " ����� " << volume << std::endl;
		if (id == 'R')
			std::cout << "����� ����������� �������� #" << inx << " ����� " << volume << std::endl;
	}