#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>
using namespace std;
void nhap(int a[][100], int& m, int& n)
{
	do
	{
		cout << "cho biet so dong cua mang ";
		cin >> m;
	} while (m <= 0);
	do
	{
		cout << "cho biet so cot cua mang ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Gia tri phan tu a " << "[" << i << "]" << "[" << j << "] =";
			cin >> a[i][j];

		}
	}
}
void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "\t" << a[i][j];
		cout <<endl;
	}
}
//void random(int a[][100], int& m, int& n)
//{
//	do
//	{
//		cout << "nhap so dong m";
//		cin >> m;
//	} while (m < 0 || m>100);
//	do
//	{
//		cout << "nhap so cot n ";
//		cin >> n;
//	} while (n < 0 || n>100);
//	srand((int)time(0));
//	for (int i = 0; i < m; i++)
//	for (int j = 0; j < n; j++)
//		{
//			cout << "Gia tri phan tu a " << "[" << i << "]" << "[" << j << "] =";
//			cin >> a[i][j];
//			a[i][j] = rand() % 200 - 99;
//		}
//}
void tinh(int a[][100], int m,int n)
{
	int tong = 0;
		for (int i = 0; i< n; i++)
		{
			tong += a[i][i];
		}
	cout << "tong duong cheo chinh la "<<tong;
}
int ktsoduong(int a[][100], int m, int n)
{
	int kt = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
			{
				kt = 0;
				break;
			}
		}
		if (kt == 1)
		{
			cout << "mang nay toan so duong ";
		}
		else
		{
			cout << "mang nay khong co so duong ";
		}
		return kt;
	}
}
int doixung(int a[][100], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != a[i][j])
			{
				break;
			}
		}
		if (doixung(a, n, m) == 0)
		{
			cout << "mang khong doi xung ";
		}
		else
		{
			cout << "mang doi xung ";
		}
	}
	return 1;
}
int KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for (int i = 3; i <= sqrt((float)n); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int TimSoNguyenToDauTien(int a[][100], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (KiemTraNguyenTo(a[i][j]) == 1)
			{
				return a[i][j];
			}
		}
	}
	return -1;
}

int TimSoNguyenToLonNhat(int a[][100], int m, int n)
{
	int SoNguyenToMax = TimSoNguyenToDauTien(a, m, n);
	if (SoNguyenToMax == -1)
	{
		return -1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (KiemTraNguyenTo(a[i][j]) == 1)
			{
				SoNguyenToMax = (SoNguyenToMax > a[i][j]) ? SoNguyenToMax : a[i][j];
			}
		}
		cout <<"so nguyen to lon nhat la " <<SoNguyenToMax<<endl;
	}
	return SoNguyenToMax;
}
void main()
{
	int a[100][100];
	int m, n, b;
	cout << "moi ban chon bai ";
	cin >> b;
	switch (b)
	{
	case 12:nhap(a, m, n); break;
	//case 13: random(a, m, n); break;
	case 14: nhap(a, m, n); 
		cout << "xuat mang ";
		xuat(a, m, n); break;
	case 15: nhap(a, m, n);
		xuat(a, m, n);
		tinh(a, m, n); break;
	case 17: nhap(a, m, n);
		xuat(a, m, n);
		ktsoduong(a, m, n); break;
		case 19: nhap(a, m, n);
			xuat(a, m, n);
			doixung(a, n, m); break;
		case 20: nhap(a, m, n);
			xuat(a, m, n);
			TimSoNguyenToLonNhat(a, m, n);

	}
}