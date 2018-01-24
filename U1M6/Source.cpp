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
		cout << "������� ����� �������, 0 ��� ������ "; cin >> nz;
		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������� ��������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ���������� B(A � �������,
				B � �������� ��������; ��� ��������� �������� �������������).� ������� ���� ��������� ����� ������ ������� ���� ������ �����.*/
			float mas[5], mas1[5];
			system("cls");
			cout << "������ \n";
			for (int i = 0; i < 5; i++)
			{
				mas[i] = (5.4 + rand() % 100) / (5 + rand() % 100);
				cout << mas[i] << "\t\t";

			}
			cout << "\n������ ����������� � 3 ������� \n";
			for (int i = 0; i < 5; i++)
			{
				mas1[i] = PowerA3(mas[i], &mas1[i]);
				cout << mas1[i] << "\t\t";
			}
			cout << endl << endl;
		}
		else if (nz == 2)
		{
			/*2.	������� ��������� PowerA234(A, B, C, D), ����������� ������, ������ � ��������� ������� ����� A � ������������
				��� ������� �������������� � ���������� B, C � D(A � �������, B, C, D � �������� ���������; ��� ��������� ��������
				�������������).� ������� ���� ��������� ����� ������, ������ � ��������� ������� ���� ������ �����.*/
			float mas[5], mas1[5], mas2[5], mas3[5];
			system("cls");
			cout << "������ \n";

			for (int i = 0; i < 5; i++)
			{
				mas[i] = (5.4 + rand() % 100) / (5 + rand() % 100);
				/*cout << mas[i] << "\t\t";*/
				cout.precision(2);
				cout << mas[i] << "\t";

			}
			cout << "\n������ ����������� � 2 ������� \n";
			for (int i = 0; i < 5; i++)
			{
				PowerA234(mas[i], &mas1[i], &mas2[i], &mas3[i]);
				cout.precision(2);
				cout << mas1[i] << "\t";
			}
			cout << "\n������ ����������� � 3 ������� \n";
			for (int i = 0; i < 5; i++)
			{
				PowerA234(mas[i], &mas1[i], &mas2[i], &mas3[i]);
				cout.precision(2);
				cout << mas2[i] << "\t";
			}
			cout << "\n������ ����������� � 4 ������� \n";
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
			/*3.	������� ��������� RectPS(x1, y1, x2, y2, P, S), ����������� �������� P � ������� S �������������� �� ���������,
				������������� ���� ���������, �� �����������(x1, y1), (x2, y2) ��� ��������������� ������(x1, y1, x2, y2 � �������,
				P � S � �������� ��������� ������������� ����).� ������� ���� ��������� ����� ��������� � ������� ����
				��������������� � ������� ���������������� ���������.*/
			int x1[5],y1[5];
			float P[5], S[5];
			system("cls");
			cout << "��������������\n";
			for (int i = 0; i < 5; i++)
			{
				cout << i + 1 << "\t";
			}
			cout << endl;
			cout << "����� ��������������\n";			
			for (int i = 0; i < 5; i++)
			{				
				x1[i] = 10 + rand() % 20;
				cout << x1[i] << "\t";
			}
			cout << endl;
			cout << "������ ��������������\n";
			for (int i = 0; i < 5; i++)
			{
				y1[i] = 10 + rand() % 20;
				cout << y1[i] << "\t";
			}
			cout << endl;
			cout << "�������� ��������������\n";
			for (int i = 0; i < 5; i++)
			{
				RectPS(&x1[i], &y1[i], &P[i], &S[i]);
				cout << P[i] << "\t";
			}
			cout << endl;
			cout << "������� ��������������\n";
			for (int i = 0; i < 5; i++)
			{
				RectPS(&x1[i], &y1[i], &P[i], &S[i]);
				cout << S[i] << "\t";
			}
			cout << endl<<endl;
		}
		else if (nz == 4)
		{
			/*4.	������� ��������� DigitCountSum(K, C, S), ��������� ���������� C ���� ������ �������������� ����� K, � ����� ��
				����� S(K � �������, C � S � �������� ��������� ������ ����).� ������� ���� ��������� ����� ���������� � ����� ����
				��� ������� �� ���� ������ ����� �����*/
			int K[5], C[5], S[5];
			system("cls");
			cout << "�����\n";
			for (int i = 0; i < 5; i++)
			{
				K[i] = 10 + rand() % 2000;
				cout << K[i] << "\t";
			}
			cout << endl;
			cout << "�����������\n";
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