#include <iostream>
using namespace std;
int kt(int n)
{
	int demuoc = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			demuoc++;
	if (demuoc == 2)
		return 1;
	return 0;
}
void main()
{
	int so;
	cout << "nhap so nguyen ";
	cin >> so;
	int kq = kt(so);
	if (kq == 1)
		cout << "day la so nguyen to ";
	else
		cout << "day khong phai la songuyen to ";
}