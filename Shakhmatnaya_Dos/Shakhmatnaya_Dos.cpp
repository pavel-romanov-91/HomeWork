#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
#define UPPER_LEFT_ANGLE     char(218)
#define UPPER_RIGHT_ANGLE    (char)191
#define DOWN_LEFT_ANGLE      (char)192
#define DOWN_RIGHT_ANGLE     (char)217
#define HORIZONTAL_LINE      (char)196 << (char)196
#define VERTICAL_LINE        (char)179 
#define BLACK_BOX            "   "
#define WHITE_BOX            (char)219 << (char)219
//#define WHITE_BOX            "\xDB\xDB"
// \x - позволяет включить ASCII-символ в строковую константу
// после \х обязательно идет шеснацитеричный код символов

//#define TASK_1
#define TASK_2
//#define TASK_3
#define SHAKMATNAYA_DOS

//int main()
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
   // SetConsoleCP(CP_UTF8);
#ifdef TASK_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((j % 2 == 0 && i % 2 == 0) || (j % 2 != 0 && i % 2 != 0))
				cout << char(219);
			else
				cout << " ";
		}
		cout << endl;
	}
#endif // TASK_1

#ifdef TASK_2
    cout << "Доска: " << endl;
    for (int pos = 0; pos < 64; pos++)
    {
        if (pos % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    
                   cout << "* ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << " ";
                }
                cout << endl;
            }
        }
    }
#endif // TASK_2
#ifdef TASK_3
    cout << "  \t";
    for (char i = 'A'; i <= 'G'; i++)cout << ' ' << i; //горизонталь доски букв
    cout << endl;
    for (int i = 1; i <= 8; i++)//вертикаль доски цифры
    {
        cout << "\t";
        for (int j = 1; j <= 8; j++)//горизонталь доски
        {
            if (i % 2 == 1)//если не четная
            {
                if (j % 2 == 1)
                {
                    cout << " " << char(127);
                }
                else
                {
                    cout << " " << char(254);
                }
            }
            if (i % 2 == 0)//если четная
            {
                if (j % 2 == 0)
                {
                    cout << " " << char(127);
                }
                else
                {
                    cout << " " << char(254);
                }
            }
            if (i == 1)//1 ряд
            {
                if (j == 8)
                {
                    cout << " " << 8;
                }
            }
            if (i == 2)//2 ряд
            {
                if (j == 8)
                {
                    cout << " " << 7;
                }
            }
            if (i == 3)
            {
                if (j == 8)
                {
                    cout << " " << 6;
                }
            }
            if (i == 4)
            {
                if (j == 8)
                {
                    cout << " " << 5;
                }
            }
            if (i == 5)
            {
                if (j == 8)
                {
                    cout << " " << 4;
                }
            }
            if (i == 6)
            {
                if (j == 8)
                {
                    cout << " " << 3;
                }
            }
            if (i == 7)
            {
                if (j == 8)
                {
                    cout << " " << 2;
                }
            }
            if (i == 8)
            {
                if (j == 8)
                {
                    cout << " " << 1;
                }
            }
        }
        cout << ("\n");
    }
    cout << ("\n \n");
#endif // TASK_3
#ifdef SHAKMATNAYA_DOS
    setlocale(LC_ALL, "C");// возрощает кодировку по умолчанию 
    n++;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
            else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
            else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
            else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
            else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
            else if (j == 0 || j == n)cout << VERTICAL_LINE;
           // else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
               // i % 2 == j % 2 ? cout << WHITE_BOX : cout << "  ";
            //(i + j) % 2 == 0 ? cout << WHITE_BOX : cout << "  ";
        }
        cout << endl;
    }




   /*
    setlocale(LC_ALL, "C"); 
   for (int i = 0; i << 256; i++)
   {
       cout << i << "\t" << (char)i << endl;
   }
   */
#endif // SHAKMATNAYA_DOS

}
