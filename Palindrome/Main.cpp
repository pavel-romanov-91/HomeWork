#include<iostream>
using namespace std;

//#define PALINDROME


void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME



	int number; // ����� �������� � ����������
	int reverse = 0; // ����� ���������� ��������
	cout << "������� �����:"; cin >> number;
	int copy = number; // ��������� ����� ��������� �����
	while (copy > 0);
	{
		reverse *= 10; //��������� reverse �� 10
		reverse += copy % 10;
		copy /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "����� ��������:" << endl;
	}
	else
	{
		cout << "����� �� ��������" << endl;
	}
#endif // PALINDROME



}