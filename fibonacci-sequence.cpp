// fibonaccisequence.cpp: определяет точку входа для консольного приложения.
//
#include<iostream>

using namespace std;

int fibonaccisequence()
{
	int n, fn, f0 = 0, f1 = 1;
	cin >> n;

	cout << f1 << " ";
	n--;
	cout << "къек";

	while (n != 0) {
		fn = f0 + f1;
		cout << fn << " ";
		f0 = f1;
		f1 = fn;
		n--;
	}
	cout << endl;
	system("pause");
	return 0;
}