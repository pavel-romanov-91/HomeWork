#include<iostream>
#include <conio.h>
using namespace std;
//#define TASK_1
#define TASK_2
//#define TASK_3
void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	long double a, n, b, c;
	cout << "������� �����:"; cin >> a;
	cout << "������� �������:"; cin >> n;
	c = a;
	for (b = 1; b < n; b++) c *= a;
	cout << "�����:" << c << endl;
#endif // TASK_1
#ifdef TASK_2
	for (int symbol = 0; symbol < 256; symbol++)
	{
		if (symbol % 16 == 0) cout << endl;
		cout  << (char)symbol << "|������ ASCII|";
	}
#endif // TASK_2
#ifdef TASK_3
	int f1 = 0, f2 = 1, a = 0, n;
	cout << "������� ����� ��������: "; cin >> n;
	cout << f1 << ", " << f2 << ", ";
	a = f1 += f2;
	while (a <= n)
	{
		cout << a << "|";
		f1 = f2;
		f2 = a;
		a = f1 + f2;
		a > 50;
	}
#endif // TASK_3
}
