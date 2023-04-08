#include <iostream>
using namespace std;
int main()
{
	int a, b, c,max,min;
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
	cout << "nhap c = ";
	cin >> c;
	max = a;
	if (b >= max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	cout << "gia tri lon nhat la " << a << b << c << max << endl;

}
