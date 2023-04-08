#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "nhap m = ";
	cin >> m;
	cout << "nhap n = ";
	cin >> n;
	cout << "cac so hang chuc la so 2 trong khoang la : ";
	if (m > n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}
	for (int i = m; i <= n; i++)
	{
		int a = i % 100;
		float b = float(a / 20);
		if (b >= 1 && b < 1.5)
		{
			cout << " " << i << endl;
		}
	}
}

