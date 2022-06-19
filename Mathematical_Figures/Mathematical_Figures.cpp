#include<iostream>
#include <iomanip>
using namespace std;

//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7
//#define TASK_8
//#define TASK_9
//#define TTERNARY

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите число:"; cin >> n;
#ifdef TASK_0
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TASK_0
#ifdef TASK_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_1
#ifdef TASK_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_2
#ifdef TASK_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_3
#ifdef TASK_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= n; j++)cout << "  ";
		for (int j = 0; j <= i; j++)cout << "* ";
		cout << endl;
	}
#endif // TASK_4
#ifdef TASK_5
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)cout << "/";
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)cout << "*";
		cout << endl;;
	}
#endif // TASK_5
#ifdef TASK_6
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				for (int j = 1; j <= n; j++)cout << "+ " << "- ";
			else
				for (int j = 1; j <= n; j++)cout << "- " << "+ ";
			cout << endl;
		}
	}
#endif // TASK_6
#ifdef TASK_7
	cout << "size? ";
	int sz; cin >> sz;
	for (int r = 0; r < 8; ++r) {
		for (int k = 0; k < sz; ++k) {
			for (int c = 0; c < 8; ++c)
				cout << setfill((r + c) % 2 ? ' ' : '*') << setw(sz) << "";
			cout << endl;
		}
	}
#endif // TASK_7
#ifdef TASK_8
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";	
		cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; 
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";
		cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; 
		cout << "/";
		cout << endl;
	}
#endif // TASK_8
#ifdef TASK_9
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // TASK_9
#ifdef TERNARY
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= n; j++)
			cout << (j == n ? "\n" : (i + j) % 2 == 0 ? "+ " : "- ");
		cout << endl;
#endif // TERNARY
		for (int line = 0; line < 40; line++) 
		{
			for (int column = 0; column < 40; column++) 
			{
				if ((line / n + column / n) & 1)
					std::cout << "* ";
				else
					std::cout << "  ";
			}
			cout << endl;
		}
}