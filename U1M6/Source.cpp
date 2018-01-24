#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include <vector>

using namespace std;
float PowerA3(float A, float *B);
void PowerA234(float A, float *B, float *C, float *D);
void RectPS(int *x1, int *y1, float *P, float *S);
void DigitCountSum(int *K, int *C, int *S);

short int nz;

void main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(0));

	while (true)
	{
		cout << "Введите номер задания, 0 для выхода "; cin >> nz;
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B(A — входной,
				B — выходной параметр; оба параметра являются вещественными).С помощью этой процедуры найти третьи степени пяти данных чисел.*/
			float mas[5], mas1[5];
			system("cls");
			cout << "Массив \n";
			for (int i = 0; i < 5; i++)
			{
				mas[i] = (5.4 + rand() % 100) / (5 + rand() % 100);
				cout << mas[i] << "\t\t";

			}
			cout << "\nМассив возведенный в 3 степень \n";
			for (int i = 0; i < 5; i++)
			{
				mas1[i] = PowerA3(mas[i], &mas1[i]);
				cout << mas1[i] << "\t\t";
			}
			cout << endl << endl;
		}
		else if (nz == 2)
		{
			/*2.	Описать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A и возвращающую
				эти степени соответственно в переменных B, C и D(A — входной, B, C, D — выходные параметры; все параметры являются
				вещественными).С помощью этой процедуры найти вторую, третью и четвертую степень пяти данных чисел.*/
			float mas[5], mas1[5], mas2[5], mas3[5];
			system("cls");
			cout << "Массив \n";

			for (int i = 0; i < 5; i++)
			{
				mas[i] = (5.4 + rand() % 100) / (5 + rand() % 100);
				/*cout << mas[i] << "\t\t";*/
				cout.precision(2);
				cout << mas[i] << "\t";

			}
			cout << "\nМассив возведенный в 2 степень \n";
			for (int i = 0; i < 5; i++)
			{
				PowerA234(mas[i], &mas1[i], &mas2[i], &mas3[i]);
				cout.precision(2);
				cout << mas1[i] << "\t";
			}
			cout << "\nМассив возведенный в 3 степень \n";
			for (int i = 0; i < 5; i++)
			{
				PowerA234(mas[i], &mas1[i], &mas2[i], &mas3[i]);
				cout.precision(2);
				cout << mas2[i] << "\t";
			}
			cout << "\nМассив возведенный в 4 степень \n";
			for (int i = 0; i < 5; i++)
			{
				PowerA234(mas[i], &mas1[i], &mas2[i], &mas3[i]);
				cout.precision(2);
				cout << mas3[i] << "\t";
			}
			cout << endl << endl;
		}
		else if (nz == 3)
		{
			/*3.	Описать процедуру RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь S прямоугольника со сторонами,
				параллельными осям координат, по координатам(x1, y1), (x2, y2) его противоположных вершин(x1, y1, x2, y2 — входные,
				P и S — выходные параметры вещественного типа).С помощью этой процедуры найти периметры и площади трех
				прямоугольников с данными противоположными вершинами.*/
			int x1[5],y1[5];
			float P[5], S[5];
			system("cls");
			cout << "Прямоугольники\n";
			for (int i = 0; i < 5; i++)
			{
				cout << i + 1 << "\t";
			}
			cout << endl;
			cout << "Длина прямоугольника\n";			
			for (int i = 0; i < 5; i++)
			{				
				x1[i] = 10 + rand() % 20;
				cout << x1[i] << "\t";
			}
			cout << endl;
			cout << "Ширина прямоугольника\n";
			for (int i = 0; i < 5; i++)
			{
				y1[i] = 10 + rand() % 20;
				cout << y1[i] << "\t";
			}
			cout << endl;
			cout << "Периметр прямоугольника\n";
			for (int i = 0; i < 5; i++)
			{
				RectPS(&x1[i], &y1[i], &P[i], &S[i]);
				cout << P[i] << "\t";
			}
			cout << endl;
			cout << "Площадь прямоугольника\n";
			for (int i = 0; i < 5; i++)
			{
				RectPS(&x1[i], &y1[i], &P[i], &S[i]);
				cout << S[i] << "\t";
			}
			cout << endl<<endl;
		}
		else if (nz == 4)
		{
			/*4.	Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K, а также их
				сумму S(K — входной, C и S — выходные параметры целого типа).С помощью этой процедуры найти количество и сумму цифр
				для каждого из пяти данных целых чисел*/
			int K[5], C[5], S[5];
			system("cls");
			cout << "Числа\n";
			for (int i = 0; i < 5; i++)
			{
				K[i] = 10 + rand() % 2000;
				cout << K[i] << "\t";
			}
			cout << endl;
			cout << "Разрядность\n";
			for (int i = 0; i < 5; i++)
			{
				DigitCountSum(&K[i],&C[i],&S[i]);
				cout << C[i] << "\t";
			}
		}
	}
}

float PowerA3(float A, float *B)
{
	*B = A*A*A;
	return *B;
}

void PowerA234(float A, float *B, float *C, float *D)
{
	*B = A*A;
	*C= A*A*A;
	*D= A*A*A*A;	
}

void RectPS(int *x1, int *y1, float *P, float *S)
{
	*P = (*x1*2) + (*y1*2);
	*S = (*x1)*(*y1);
}

void DigitCountSum(int *K, int *C, int *S)
{
	int Len=0;
	int K1=*K;
	while (K1 >= 0)
	{
		K1 = K1 / 10;
		Len++;
	}
	*C = Len;
	vector<int>m(Len);
	K1 = *K;
	for (int i = Len; i >= 0; i--)
	{
		m[i] = K1 % 10;
	}
	*S = 0;
	for (int i = 0; i < Len; i++)
	{
		*S += m[i];
	}
}