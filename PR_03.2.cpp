// Lab_03_2.cpp
// Качмар Владислав.
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F = 0.0; // результат обчислення виразу
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0.6 && b+c!= 0)
		F = a * x*x + b*b + c;
	if (x > 0.6 && b+c == 0)
		F = (x - a) / (x - c);
	if (!(x < 0.6 && b + c != 0) && !(x > 0.6 && b + c == 0))
		F = (x / c) + (x / 2);
	cout << endl;
	cout << "1) F = " << F << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0.6 && b+c != 0)
		F = a * x * x + b * b + c;
	else
		if (x > 0.6 && b + c == 0)
			F = (x - a) / (x - c);
		else
			F = (x / c) + (x / 2);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
