#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c, x1, x2, delta;
	cout << "nhap he so a,b,c : ";
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "he so phai khac 0 ";
	}
	else
	{
		delta = pow(b, 2) - (4 * a * c);
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "phuong trinh co nghiem phan biet x1 : " << x1 << endl;
			cout << "phuong trinh co nghiem phan biet x2 : " << x2;
		}
		else if (delta == 0)
		{
			x1 = -b / (2 * a);
			cout << "phuong trinh co nhgiem kep x1=x2 " << x1;
		}
		else
			cout << "phuong trinh vo nghiem ";
	}
}