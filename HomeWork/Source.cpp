#include<iostream>
using namespace std;

//#define TASK_1
#define TASK_2

void main()


{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	int n, num, digit, rev = 0;
	cout << "������� �����: "; cin >> num;
	n = num;
	do
	{
		digit = num / 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} 
	while (num != 0);
	cout << "����� �� ������: " << rev << endl;
	if (n == rev)
		cout << "��� ����� ���������: ";
	else
		cout << "��� ����� �� ���������: ";
	
#endif


#ifdef TASK_2
	cout << "������� ����� ������:";
	string n;
	int a = 0, b = 0; cin >> n;
	a = n[0] + n[1] + n[2];
	b = n[3] + n[4] + n[5];
	if (a == b)
		cout << "���������� �����:";
	else
		cout << "�� ���������� �����:";

#endif
}