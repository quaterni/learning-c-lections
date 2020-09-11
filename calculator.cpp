// calculator.cpp: определяет точку входа для консольного приложения.
//
#include<iostream>
using namespace std;

int calculator()
{
	int x, y;
	char z;

	cin >> x >> z >> y;
	cout << x << z << y << "=";

	if (z == '+') {
		cout << (x + y) << endl;
	}
	else if (z == '-') {
		cout << (x - y) << endl;
	}
	else if (z == '*') {
		cout << (x * y) << endl;
	}
	else {
		cout << (double(x) / y) << endl;
	}

	system("pause");
	return 0;
}