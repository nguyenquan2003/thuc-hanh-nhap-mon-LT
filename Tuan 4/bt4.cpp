#include <iostream>
#include <cmath>
using namespace std;
int tinhdt()
{
	int a, int b, int c;
	float p, s, S;
	cout << "nhap 3 canh cua tam giac = ";
	cin >> a >> b >> c;
	p = float(a + b + c) / 2;
	s = p * (p - a) * (p - b) * (p - c);
	if ((a + b) > c && (b + c) > a && (a + c) > b
		{
			S = sqrt(s);
			cout << "dien tich la " << S;
		}
	else
	{
		cout << "khong phai tam giac ";
	}
}
int main()
{
	tinhdt();
}