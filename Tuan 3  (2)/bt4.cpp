#include <iostream>
using namespace std;
int main()
{
	int n,dem=0;
	cout << "nhap n = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem = dem + 1;
		}
	}
	if (dem == 2)
		cout << "la so nguyen to " << endl;
	else
		cout << "khong phai la so nguyen to " << endl;
}
