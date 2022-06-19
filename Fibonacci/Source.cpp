#include<iostream>
using namespace std;

//#define FIBONACCI
#define TABLE_UMNOZHENIYE
//#define TABLITSU_PIFAGORA

void main()
{
	setlocale(LC_ALL, "");
#ifdef FIBONACCI
	int n;
	cout << "Введите количества чисел из ряда Фибоначи:"; cin >> n;
	for (double a = 0, b = 1, c = a + b, i = 0; i < n; i++)
	{
		cout << a << "\n";
		a = (a = b) + (b = c); //оператор с присвоением
	}
#endif // FIBONACCI
#ifdef TABLE_UMNOZHENIYE
	for (int j = 1; j <= 10; j++)
	{
		for (int i = 1; i <= 9; i++)
		{
			cout << i << "x" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE
#ifdef TABLITSU_PIFAGORA
	for (int a = 1; a <= 10; ++a)
	{
		for (int b = 1; b <= 10; ++b)
			cout << a * b << "	";
		cout << endl;
	}
#endif // TABLITSU_PIFAGORA

}