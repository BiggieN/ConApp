// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	cout << "����������, ������� �������� � ��������� ������: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\n��� ���� ��n == " << 3 * n
		<< "\n��� ���� ��n == " << n + n
		<< "\nn � ��������== " << n * n
		<< "\n��������n == " << n / 2
		<< "\n������ ���������� ��n == " << sqrt(n)
		<< endl;
	system("pause");
}

