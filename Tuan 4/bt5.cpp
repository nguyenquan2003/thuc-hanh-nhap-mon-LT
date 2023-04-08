#include <iostream>
#include <cstdio>
#include<math.h>
using namespace std;
int Tinh()
{
	int n, tong = 0, i;
	cout << "Nhap n: ";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0) {
			tong += i;
		}
	}
	cout << "Tong cac uoc la: " << tong;
}
int Ngay()
{
	int t, y;
	cout << "\nNhap thang: ";
	cin >> t;

	switch (t) {
	case 1:cout << "\n So ngay la: 31"; break;
	case 3:cout << "\n So ngay la: 31"; break;
	case 5: cout << "\n So ngay la: 31"; break;
	case 7:cout << "\n So ngay la: 31"; break;
	case 8: cout << "\n So ngay la: 31"; break;
	case 10:cout << "\n So ngay la: 31"; break;
	case 12:cout << "\n So ngay la: 31"; break;
	case 4:cout << "\n So ngay la: 30"; break;
	case 6:cout << "\n So ngay la: 30"; break;
	case 9: cout << "\n So ngay la: 30"; break;
	case 11:cout << "\n So ngay la: 30"; break;
	case 2: {
		cout << "\nNhap nam: ";
		cin >> y;
		if (y % 400 == 0)
			cout << "\n So ngay la: 29";
		else
			cout << "\n So ngay la: 28";
	}break;
	}
}
int swap()
{
	int a, b;
	do {
		cout << "\nNhap x: ";
		cin >> a;
		cout << "\nNhap y: ";
		cin >> b;
	} while (a < 0 || b < 0);
	int c = a;
	a = b;
	b = c;
	cout << "\n x= " << a;
	cout << "\n y=" << b;
}
int BCNN()
{
	int a, b, bc;
	cout << "Nhap a: ";
	cin >> a;
	cout << "\nNhap b: ";
	cin >> b;
	for (bc = a; bc <= a * b; bc++) {
		if (bc % a == 0 && bc % b == 0) {
			cout << "BCNN\n" << a << b << bc;
			break;
		}
	}
}
int KT()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	if (n % 2 == 0)
		cout << "\n la so chan!" << n;
	else
		cout << "\n la so le!" << n;
}
int main()
{
	int x;
	do {
		cout << "1.Tong cac uoc cua n.\n2.So ngay.\n3.Doi cho x,y.\n4.Tim BCNN cua a,b.\n5.Kiem tra chan, le.";
		cout << "\nNhap lua chon: ";
		cin >> x;
	} while (x < 1 || x>5);
	switch (x)
	{
	case 1: Tinh(); break;
	case 2: Ngay(); break;
	case 3: swap(); break;
	case 4: BCNN(); break;
	case 5: KT(); break;
	}
	return 0;
}