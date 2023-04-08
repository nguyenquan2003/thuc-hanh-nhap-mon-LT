#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void nhap(int a[][100], int& m, int& n)  //m dong, n cot
{
	do
	{
		cout << "cho biet so dong cua mang : ";
		cin >> m;
	} while (m <= 0);
	do
	{
		cout << "cho biet so cot cua mang : ";
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
		cout << endl;
	}
}
void random(int a[][100], int m, int n)
{
	do
	{
		cout << "cho biet so dong cua mang : ";
		cin >> m;
	} while (m <= 0);
	do
	{
		cout << "cho biet so cot cua mang : ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			 a[i][j]=rand()%100;
		}
}
}
void xuatnguyento(int a[][100], int m, int n)
{
	for (int i = 0; i < m-1; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] >= 2) 
			{
				int d = 0; 
				for (int k = 2; k <= a[i][j] / 2; k++)
					if (a[i][j] % k == 0)d++;
				if (d == 0)cout <<"so nguyen to la so : "<< a[i][j] <<endl;
			}
}
void TinhTongCacPhanTuDuong(int a[][100], int n,int m)
{
	int Tong = 0;
	for (int i = 0; i < m ; i++)
	{
		for (int j = 0; j < n; j++)
		if (a[i][j] > 0)
		{
			Tong += a[i][j];
		}
	}
	cout<<"tong cac gia tri duong la : "<<Tong;
}
void DemSoLuongSoDuong(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				dem++;
			}
		}
	}
	cout << "cac so duong la :"<<dem;
}
void main()
{

	int a[100][100], chon;
	int m, n;
	cout << "========MENU========";
	cout << "1. tao mang xuat gia tri ngau nhien " << endl;
	cout << "2. kiem tra dong k trong mang co ton tai so ng to " << endl;
	cout << "3. tinh tong cac gia tri duong tren cot k " << endl;
	cout << "4. dem so dong trong mang chua toan so nguyen " << endl;
	cout << "moi ban chon bai : ";
	cin >> chon;
	nhap(a, m, n);
	cout << "\nNoi dung cua mang la: \n";
	xuat(a, n, m);
	switch (chon)
	{
	case 1: random(a, n, n); break;
	case 2: xuatnguyento(a, m, n); break;
	case 3: TinhTongCacPhanTuDuong(a, n, n); break;
	case 4: DemSoLuongSoDuong(a, m, n); break;
	}
}