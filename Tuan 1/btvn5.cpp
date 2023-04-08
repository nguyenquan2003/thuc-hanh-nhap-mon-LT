#include <iostream>
using namespace std;
int main()
{
	char kitu;
	cout << "nhap ki tu : ";
	cin >> kitu;
	int a = int (kitu);
	if (97 <= a && a < 122)
	{
		cout << "ki tu do la ki tu thuong. in hoa la : " << endl;
		a -= 32;
		cout << char(a) << endl;
	}
	else if (65 <= a && a <= 90)
	{
		cout << "ki tu do la ki tu ho. in thuong la : " << endl;
		cout << char(a) << endl;
	}
	else
		cout << "do khong phai la ki tu " << endl;
}
