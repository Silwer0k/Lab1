#include "UserInteractor.h"
#include <iostream>


	const Series& UserInteractor::AddFigures(Series& Ser)
	{
		cout << "Ââîä ôèãóð..." << endl;
		char answer;
		//||
		do
		{
			cout << "Äîáàâëåíèå ïàðàëëåïèïåäà..." << endl;
			Ser.AddFigure('P');
			cout << "Ââåäèòå èíôîðìàöèþ î ïàððàëåïèïåäå: " << endl;
			Ser.SetFigureInfo();
			cout << "Çàêîí÷èòü ââîä ïàðàëëåïèïåäîâ? (Y - çàêîí÷èòü, ëþáîé ñèìâîë - ïðîäîëæèòü )" << endl;
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		do //||
		{
			cout << "Äîáàâëåíèå êîíóñà..." << endl;
			Ser.AddFigure('C');
			cout << "Ââåäèòå èíôîðìàöèþ î êîíóñå: " << endl;
			Ser.SetFigureInfo();
			cout << "Çàêîí÷èòü ââîä êîíóñîâ? (Y - çàêîí÷èòü, ëþáîé ñèìâîë - ïðîäîëæèòü )";
			cin >> answer;
		} while ((answer != 'Y'));
		answer = 0;
		do //||
		{
			cout << "Äîáàâëåíèå ñôåð..." << endl;
			Ser.AddFigure('S');
			cout << "Ââåäèòå èíôîðìàöèþ î ñôåðå: " << endl;
			Ser.SetFigureInfo();
			cout << "Çàêîí÷èòü ââîä ñôåð? (Y - çàêîí÷èòü, ëþáîé ñèìâîë - ïðîäîëæèòü )";
			cin >> answer;
		} while (answer != 'Y');
		answer = 0;
		 //||
		do
		{
			cout << "Äîáàâëåíèå ïèðàìèä..." << endl;
			Ser.AddFigure('R');
			cout << "Ââåäèòå èíôîðìàöèþ î ïèðàìèäå: " << endl;
			Ser.SetFigureInfo();
			cout << "Çàêîí÷èòü ââîä ïèðàìèä? (Y - çàêîí÷èòü, ëþáîé ñèìâîë - ïðîäîëæèòü ) ";
			cin >> answer;
		} while (answer != 'Y');
		return Ser;
	}

	void UserInteractor::InteractionMenu(const Series& Ser)
	{
		char index_command;
		do
		{
			cout << "×òî ñäåëàòü?... " << endl;
			cout << "1 - Ïîñ÷èòàòü ïëîùàäü ïîâåðõíîñòè îäíîé ôèãóðû" << endl;
			cout << "2 - Ïîñ÷èòàòü îáúåì îäíîé ôèãóðû" << endl;
			cout << "0 - Âûõîä" << endl;
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
				cout << "Íåïðàâèëüíûé èíäåêñ êîìàíäû..." << endl;
			}
			}
		} while (index_command != '0');

	}

	void UserInteractor::OutputArea(const Series& Ser)
	{
		cout << "Ââåäèòå íîìåð ôèãóðû" << endl;
		int inx;
		char id;
		cout << "Ïîðÿäêîâûé íîìåð ôèãóðû: ";
		cin >> inx;
		double area = Ser.GetAreaOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (area == 0.0)
			std::cout << "Íåâåðíûé èíäèôèêàòîð ôèãóðû" << std::endl;
		if (id == 'P')
			std::cout << "Ïîëíàÿ ïîâåðõíîñòü ïàðàëëåïèïåäà #" << inx << " ðàâíà " << area << std::endl;
		if (id == 'C')
			std::cout << "Ïîëíàÿ ïîâåðõíîñòü êîíóñà #" << inx << " ðàâíà " << area << std::endl;
		if (id == 'S')
			std::cout << "Ïîëíàÿ ïîâåðõíîñòü ñôåðû #" << inx << " ðàâíà " << area << std::endl;
		if (id == 'R')
			std::cout << "Ïîëíàÿ ïîâåðõíîñòü ïèðàìèäû #" << inx << " ðàâíà " << area << std::endl;
	}

	void UserInteractor::OutputVolume(const Series& Ser)
	{
		cout << "Ââåäèòå íîìåð ôèãóðû" << endl;
		int inx;
		char id;
		cout << "Ïîðÿäêîâûé íîìåð ôèãóðû: ";
		cin >> inx;
		double volume = Ser.GetVolumeOneFigure(inx);
		id = Ser.GetFigureID(inx);
		if (volume == 0.0)
			std::cout << "Íåâåðíûé èíäèôèêàòîð ôèãóðû" << std::endl;
		if (id == 'P')
			std::cout << "Îáúåì ïàðàëëåïèïåäà #" << inx << " ðàâíà " << volume << std::endl;
		if (id == 'C')
			std::cout << "Îáúåì ïîâåðõíîñòü êîíóñà #" << inx << " ðàâíà " << volume << std::endl;
		if (id == 'S')
			std::cout << "Îáúåì ïîâåðõíîñò ñôåðû #" << inx << " ðàâíà " << volume << std::endl;
		if (id == 'R')
			std::cout << "Îáúåì ïîâåðõíîñòü ïèðàìèäû #" << inx << " ðàâíà " << volume << std::endl;
	}
