#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a, b;
	float x;
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
	x = float(-b / a);
	cout << "phuong trinh bac nhat " << a << "x+" << b << "=0" << endl;
	cout << "nghiem cua phuong trinh la " << x;
}