#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap n= ";
	cin >> n;
	while (n < 0);
	int m = 0, tong = 0;
	while (tong <= n)
	{
		tong += m++;
	}
	cout << "gia tri nho nhat la : " << m - 1;
}