// Surname_Project.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

double EnterNumber()
{
	//разрабатывается Ивановым И. - ветка branch_fun_1
	string input;
	getline(cin, input);
	try
	{
		double number = stoi(input);
		return number;
	}
	catch (...)
	{
		return 0;
	}
}

double CalcArea(int num_a)
{
	//разрабатывается Петровым П. - ветка branch_fun_2
<<<<<<< HEAD
	return num_a * num_a;
=======
	return 0;
>>>>>>> 68f3aa636bd8a0be19abee5719cbf61bc2ca91fd
}

double CalcPerim(int num_a)
{
	//разрабатывается Васильевым В. - ветка branch_fun_3
<<<<<<< HEAD
	return 4 * num_a;
=======
	return 0;
>>>>>>> d4cf17bdb10382ebf18d6e7daac5a7aeef79f8b6
}

int main()
{
	int funcSelect = 0;
	double num_a = 0, S,P;
	for (;;)
	{
		cout << "\n1. Enter a number A (side of equilateral triangle)\n";
		cout << "2. Calculate the area of an equilateral triangle with side A\n";
		cout << "3. Calculate the perimeter of an equilateral triangle with side A\n\n";
		cout << "Please enter the number of the desired function or 0 if you want to close the app: \n";
		cin >> funcSelect;
		switch (funcSelect)
		{
		case 0:
		{
			return 0;
		}
		case 1:
		{
			num_a = EnterNumber();
			break;
		}
		case 2:
		{
			S=CalcArea(num_a);
			break;
		}
		case 3:
		{
			P=CalcPerim(num_a);
			break;
		}
		}
	}
	system("PAUSE");
	return 0;
}