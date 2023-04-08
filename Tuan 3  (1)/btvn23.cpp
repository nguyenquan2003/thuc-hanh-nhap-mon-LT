#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,i=1;
	float s = 0;
	cout << "nhap n = ";
	cin >> n;
	switch (n)
	{
	case 1:
		while (i <= n)
		{
			do
			{
				cout << "nhap so nguyen duong x = ";
				cin >> x;
			} while (n < 0);
			s = sqrt(i + s);
			i++;
		}
		cout << "ket qua la " << s;
		break;
	case 2:
	{
		while (n--)
		{
			s = sqrt((n + 1) + s);
		}
		cout << "S= " << s;
		break;
	}
	}
	return 0;
}