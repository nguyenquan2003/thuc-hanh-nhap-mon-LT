#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;
int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
void main()
{
	int x, y;
	cout << "nhap x= ";
	cin >> x;
	cout << "nhap y= ";
	cin >> y;
	int uc = UCLN(x, y);
	cout << "uoc chung lon nhat la : " << uc;
}