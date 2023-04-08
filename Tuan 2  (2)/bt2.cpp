#include <iostream>
using namespace std;
int main()
{
	int a, b ;
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
	cout << "nhap phep toan = ";
	char pheptoan;
	cin >> pheptoan;
	switch (pheptoan)
	{
	case '+':
	{
		cout << "a+b = " << a + b << endl;
		break;
	}
	case '-':
	{
		cout << "a-b = " << a - b << endl;
		break;
	}
	case '*':
	{
		cout << "a*b = " << a * b << endl;
		break;
	}
	case '/':
		if (b!=0)
	{
			float thuong;
			thuong = (float)a / b;
		cout << "a/b = " << a / b << endl;
		break;
	}
	default:
		cout << "nhap sai phep toan ";
		break;
	}
}