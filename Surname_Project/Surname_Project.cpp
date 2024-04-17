// Surname_Project.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;

double EnterNumber()
{
	//разрабатывается Ивановым И. - ветка branch_fun_1
}

double CalcArea(int num_a)
{
	//разрабатывается Петровым П. - ветка branch_fun_2
}

double CalcPerim(int num_a)
{
	//разрабатывается Васильевым В. - ветка branch_fun_3
	return 4 * num_a;
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

//bool is_number(const std::string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it != s.end() && isdigit(*it)) ++it;
//	return !s.empty() && it == s.end();
//}
//
//void input_x(int &X)
//{
//	string s;
//	do
//	{
//		cout << "vvedite chislo" << endl;
//		cin >> s;
//	} while (!is_number(s));
//
//	X = stoi(s);
//}
//
//void input_n(int &N)
//{
//	string s;
//	do
//	{
//		cout << "vvedite chislo" << endl;
//		cin >> s;
//	} while (!is_number(s));
//
//	N = stoi(s);
//}
//
//void coun(int X)
//{
//	cout << "Count numbers: " << to_string(X).length() << endl;
//}
//void mult(int X, int N)
//{
//
//	string s = to_string(X);
//	int rez = 1;
//	for (int i = s.length() - N; i < s.length(); i++)
//	{
//		rez *= s[i] - '0';
//	}
//
//	cout << endl;
//
//	cout << "proizved: " << rez << endl;
//}
//
//int main()
//{
//	cout << "1. Vvesti X" << endl;
//	cout << "2. Vvesti N" << endl;
//	cout << "3. Proizv posl N cifr" << endl;
//	cout << "4. Count number in X" << endl;
//	string ss;
//	int X, N,A;
//	do
//	{
//		cin >> A;
//		switch (A)
//		{
//		case 1:
//			input_x(X);
//			break;
//		case 2:
//			input_n(N);
//			break;
//		case 3:
//			mult(X, N);
//			break;
//		case 4:
//			coun(X);
//			break;
//		}
//	} while (true);
//	system("PAUSE");
//	return 0;
//}


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

