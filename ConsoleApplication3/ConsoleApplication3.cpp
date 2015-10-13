// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	cout << "Пожалуйста, введите значение с плавающей точкой: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nтри раза поn == " << 3 * n
		<< "\nдва раза поn == " << n + n
		<< "\nn в квадрате== " << n * n
		<< "\nполовинаn == " << n / 2
		<< "\nкорень квадратный изn == " << sqrt(n)
		<< endl;
	system("pause");
}

