#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
void nhap(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}
void tinh(float a[], int n)
{
	float tong = 0;
	float tb = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i];
	}
	tb = tong / n;
	cout << "trung binh cua mang la " << tb;
}
void tongduong(float a[], int n)
{
	float tongduong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			tongduong = tongduong + a[i];
		}
	}
	cout << "tong cac gia tri duong trong mang la " << tongduong;
}
void dao(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << "\t";
	}
}
int kt(float a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		if (a[i] != a[n - 1 - i])
			return 0;
	return 1;
}
void nhapst(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "]=";
		cin >> a[i];
	}
}
void xuatst(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}

}
void Ramdom(float a[], int n)
{
	cout << "\nNhap gia tri n: ";
	cin >> n;
	srand((int)time(0));
	cout << "\nMang ngau nhien co cac phan tu chan: \n";
	for (int i = 0; i < n; i++)
	{
		float x;
		x = rand() % 100;
		a[i] = x;
		cout << i << "\t" << a[i] << endl;
	}
}
void ktra(float a[], int n)
{
	int x = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			x = 0;
		}
	}
	if (x == 1)
	{
		cout << " Day la mang tang dan ";
	}
	else
	{
		cout << "Day khong la mang tang dan ";
	}
}
bool check(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}
int demsongto(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (check(a[i]) == true)
			dem++;
	}
	cout << "So luong cac so nguyen to la: " << dem;
	return dem;
}
void timsochan(float a[], int n)
{
	int max = 2;
	for (int i = 0; i < n; i++)
	{
		if ((int)a[i] % 2 == 0 && (int)a[i] > max)
		{
			max = (int)a[i];
			cout << "so chan lon nhat la " << a[i];
		}
	}
}
void sntnhonhat(float a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	cout << "so nguyen to nho nhat " << min;
}
void timptlonthu2(float a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	int max2 = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max2 && a[i] < max) max2 = a[i];
	}
}
void xoa(float a[], int& n, int vtxoa)
{
	for (int i = vtxoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void max(float a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
}

void min(float a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
}
void main()
{

	int n, chon;
	float a[30];
	cout << "nhap n = ";
	cin >> n;
	cout << "nhap mang ";
	nhap(a, n);

	do
	{
		cout << " ban chon bai ";
		cin >> chon;
		switch (chon)
		{
		case 1: Ramdom(a, n); break;
		case 2: xuatst(a, n); break;
		case 3: tinh(a, n); break;
		case 4: tongduong(a, n); break;
		case 5: cout << "mang dao nguoc ";
			dao(a, n); break;
		case 6: if (kt(a, n) == 1)
			cout << "mang doi xung ";
			  else
			cout << "mang khong doi xung ";
			break;
		case 7: ktra(a, n); break;
		case 9: demsongto(a, n); break;
		case 10: timsochan(a, n); break;
		case 11: sntnhonhat(a, n); break;
		case 17:  timptlonthu2(a, n); break;
		case 20: int vtcanxoa;
			cout << "nhap so lon nhat muon xoa la ";
			cin >> vtcanxoa;
			xoa(a, n, vtcanxoa);
			cout << "nhap so nho nhat muon xoa la ";
			cin >> vtcanxoa;
			xoa(a, n, vtcanxoa);
			xuat(a, n);
			break;
		}
	} while (chon != 0);
}
