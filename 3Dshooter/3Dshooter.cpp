#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define TASK_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	char key;
	do
	{
		key = _getch();
		if (key == 119) cout << "������" << endl;
		else if (key == 97) cout << "�����" << endl;
		else if (key == 115) cout << "�����" << endl;
		else if (key == 100) cout << "������" << endl;
		else if (key == 32) cout << "������" << endl;
		else if (key == 13) cout << "�����" << endl;
	} while (key != Escape);
#endif // TASK_1
}