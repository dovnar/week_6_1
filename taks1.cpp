﻿#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int width, cycle = 1, total = 1, space = 1;
	char figure;

	cout << "выбери фигуру \n"
		"а:\t       \n\t ***** \n\t| **** \n\t|  *** \n\t|   ** \n\t|____* \n"
		"b:\t _____ \n\t *    |\n\t **   |\n\t ***  |\n\t **** |\n\t ***** \n"
		"c:\t       \n\t ***** \n\t| *** |\n\t|  *  |\n\t|     |\n\t|_____|\n"
		"d:\t _____ \n\t|     |\n\t|     |\n\t|  *  |\n\t| *** |\n\t ***** \n"
		"e:\t       \n\t ***** \n\t| *** |\n\t|  *  |\n\t| *** |\n\t ***** \n"
		"f:\t  ___  \n\t *   * \n\t ** ** \n\t ***** \n\t ** ** \n\t *   * \n"
		"g:\t  ____ \n\t *    |\n\t **   |\n\t ***  |\n\t **   |\n\t *    |\n"
		"h:\t _____ \n\t|    * \n\t|   ** \n\t|  *** \n\t|   ** \n\t|    * \n"
		"i:\t       \n\t ***** \n\t **** |\n\t ***  |\n\t **   |\n\t *____|\n"
		"j:\t _____ \n\t|    * \n\t|   ** \n\t|  *** \n\t| **** \n\t ***** \n";
	cin >> figure;
	cout << "введите ширину фигуры нечетное число от 5 до 15 = ";
	cin >> width;
	if ((width % 2) == 0)
	{
		cout << "действие доступно для нечетных фигур!!!";
		return 1;
	}
	switch (figure)
	{
	case 'a':
		while (cycle <= width)
		{
			while (total <= width)
			{
				if (total >= space)
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
				total++;
			}
			cout << endl;
			total = 1;
			space++;

			cycle++;
		}
		break;
	case 'b':
		total = width;
		space = width;
		while (cycle <= width)
		{
			while (total <= width)
			{
				cout << '*';
				total++;
			}
			while (total >= space)
			{
				cout << " ";
				total--;
			}
			cout << endl;
			cycle++;
			space--;
		}
		break;
	case 'c':
	{
		while (cycle <= width)
		{
			while (total <= width)
			{
				
			}
		}
	}
		break;
	case 'd':
		cout << total;
		break;
	case 'e':
		cout << total;
		break;
	case 'f':
		cout << total;
		break;
	case 'g':
		cout << total;
		break;
	case 'h':
		cout << total;
		break;
	case 'i':
		cout << total;
		break;
	case 'j':
		cout << total;
		break;

	default: cout << "ошибка не выбранна фигура!!!";
		break;
	}
}






//Вывести на экран фигуры заполненные звездочками.Диалог с пользователем реализовать при помощи меню.