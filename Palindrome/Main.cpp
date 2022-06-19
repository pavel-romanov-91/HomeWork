#include<iostream>
using namespace std;

//#define PALINDROME


void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROME



	int number; // Число вводимое с клавиатуры
	int reverse = 0; // Число записанное наоборот
	cout << "Введите число:"; cin >> number;
	int copy = number; // Сохраняем копию исходного числа
	while (copy > 0);
	{
		reverse *= 10; //Умножение reverse на 10
		reverse += copy % 10;
		copy /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число палидром:" << endl;
	}
	else
	{
		cout << "Число НЕ палидром" << endl;
	}
#endif // PALINDROME



}