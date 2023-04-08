#include <iostream>
#include <cmath>
using namespace std;
bool ktscp(int n)
{
	if (n < 1)
		return false;
	int i = sqrt(n);
	if (i * i == n)
		return true;
	return false;
}
void lietke() 
{
	int n;
	cout << "nhap n ";
	cin >> n;
	cout << "Cac so chinh phuong nho hon " << n << endl;
	for (int i = 1; i < n; i++)
	{
		if (ktscp(i))
			cout << i << " ";
	}
}
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
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
int demsongto(int a[], int n)
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
void Tongle(int a[], int n)
{
	int tongle = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2!= 0)
		{
			tongle += a[i];
		}
	}
	cout<< "tong cac so le trong mang la " << tongle;
}
void dao(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << "\t";
	}
}
void ktra(int a[], int n)
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
void tong()
{
	int n, count, sum = 0;
	cout << "Nhập vào n (số lượng phần tử đầu tiên cần tính tổng): ";
	cin >> n;
	cout << "Các số cần tính là: ";
	for (count = 1; count <= n; count++)
	{
		sum = sum + count;
		cout << count << "\t";
	}
	cout << endl << "Tổng " << n << " đầu tiên là: " << sum;
}
int main()
{
	int chon;
	do
	{

		cout << "cau 2 " << endl;
		cout << "cau 3 " << endl;
		cout << "cau 4 " << endl;
		cout << "cau 5 " << endl;
		cout << "0 . thoat chuong trinh " << endl;
		cout << "moi bn chon bai ";
		cin >> chon;
		switch (chon)
		{
			cin >> chon;
		case 2: lietke(); break;
		case 3:tong(); break;
		case 5: int n; //bai 5a
			int a[30];
			cout << "nhap n = ";
			cin >> n;
			cout << "nhap mang ";
			nhap(a, n);
			cout << "xuat mang ";//bai 5b
			xuat(a, n);
			cout << endl;
			demsongto(a, n); //bai 5c
			cout << endl;
			Tongle(a, n);//bai 5d
			cout << endl;
			cout << "mang dao nguoc "; //bai 5e
			dao(a, n);
			cout << endl;
			ktra(a, n); //bai 5f
			cout << endl;
			break;
		}
	} while (chon != 0);
}