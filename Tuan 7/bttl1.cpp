#include <iostream>
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
			cout<<"Gia tri phan tu a "<<"["<<i << "]" << "["<< j<<"] =" ;
			cin>> a[i][j];

		}
	}
}
void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout<<"\t"<<a[i][j];
		cout<<endl;
	}
}
void Timx(int a[][100], int m, int n, int x)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == x)
				cout<<"\n a " << "[" << i << "]" << "[" << j << "] ="<<a[i][j];
		}
	}
}
int DemSoLanXuatHienCuaX(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}
void demptduong(int a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				dem = dem + 1;
			}
		}
	}
	cout << "phan tu duong la " << dem << endl;
}
void timmax(int a[][100], int k, int n)
{
	int max = a[k][0];
	for (int i = 1; i < n; i++)
		if (max < a[k][i])
			max = a[k][i];
}
int Tongtungdong(int a[][100], int n, int i)
{
	int tong = 0;
	for (int j = 0; j < n; j++)
		tong += a[i][j];
	return tong;
}
void Timdongcotongmax(int a[][100], int m, int n)
{
	int max = Tongtungdong(a, n, 0), d = 0;
	for (int i = 0; i < m; i++) {
		int t = Tongtungdong(a, i, n);
		if (max < t)
		{
			max = t;
			d = i;
		}
	}
	cout<<"\nDong co tong lon nhat la: dong "<<d;
}
void timsochan(int a[][100], int m, int n)
{
	int max = -1;
	for (int i = 0; i < m; i++)
	for (int j = 0; j < n; j++)
		if (a[i][j] % 2 == 0)
		{
			max = a[i][j];
		}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (max < a[i][j] && a[i][j] % 2 == 0)
				max = a[i][j];
}
void main()
{
	int a[100][100];
	int m, n,b;
	nhap(a, m, n);
	cout<<"\nNoi dung cua mang la: \n";
	xuat(a, m, n);
	cout << "moi ban chon bai ";
	cin >> b;
	switch (b)
	{
	case 4: 
		int x;
		cout << "\nNhap gia tri can tim: "; cin >> x;
		Timx(a, m, n, x);
		break;
	case 5: int k, max;
		cout << "nhap dong can tim so lon nhat k = "; cin >> k;
		if (k >= 0 && k < m)
		{
			cout << "so lon nhat tren dong k la ";
		}
		else
			cout << "chi so dong k sai ";
	case 6: demptduong(a, n, m); break; 
	case 7: demptduong(a, n, m); break; 
	case 10: Timdongcotongmax(a, n, m); break;
	case 11: cout << "so chan lon nhat la " << max;
		timsochan(a, n, m); break;
	}
}