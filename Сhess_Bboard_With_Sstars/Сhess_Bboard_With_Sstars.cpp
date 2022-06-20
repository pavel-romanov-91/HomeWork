#include<iostream>
using namespace std;
#define UPPER_LEFT_ANGLE	char(218)
#define UPPER_RIGHT_ANGLE	(char)191
#define DOWN_LEFT_ANGLE		(char)192
#define DOWN_RIGHT_ANGLE	(char)217
#define HORIZONTAL_LINE		(char)196 << (char)196
#define VERTICAL_LINE		(char)179 
#define WHITE_BOX			"* "
#define BLACK_BOX			"  " 

#define TASK
//#define TASK_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK
	int n;
	cout << "¬ведите число:"; cin >> n;
	setlocale(LC_ALL, "C");

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if ((i / n + j / n) & 1) cout << "* ";
			else cout << "  ";
		}
		cout << endl;
	}
#endif // TASK
		int n;
		cout << "¬ведите высоту треугольника:" ; cin >> n;
		for (int i = 1; i <= n; i++) 
		{
			int a = 1;
			for (int j = 1; j < (n - i + 1); j++)
			{
				cout << " ";
			}
			for (int k = 1; k <= i; k++)
			{
				cout << a << " ";
				a = a * (i - k) / k;
			}
			cout << "\n";
		}
#ifdef TASK_1
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//for (int c = 0; c < n; c++)
			//	cout << setfill((i + c) % 2 ? " " : "* ") << setw(n) << "";
				if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
				else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
				else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
				else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
				else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
				else if (j == 0 || j == n)cout << VERTICAL_LINE;
				//else if setfill((i + c) % 2 ? " " : "* ") << WHITE_BOX;
				//else ((i + j) % 2 ? " " : "* ") << n << ""; cout << BLACK_BOX : cout << "  ";
		
			//else if (j > n) 
			//else ((j % 2 == 0 && i % 2 == 0) || (j % 2 != 0 && i % 2 != 0)) ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
#endif // TASK_1
	
}