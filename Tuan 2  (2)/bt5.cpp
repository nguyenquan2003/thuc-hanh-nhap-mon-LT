#include <iostream>
#include <cmath>
#define PI 3,14
using namespace std;
int main()
{
	int n;
	cout << "nhap n =";
	cin >> n;
	switch (n)
	{
	case 1:
		int canh;
		cout<<"nhap canh hinh vuong = "
		cin>>canh;
		cout << " chu vi hinh vuong la =  "<<canh*4;
		break;
	case 2:
		int cd,cr;
		cout << "nhap chieu dai = ";
		cin >> cd;
		cout << "nhap chieu rong = ";
		cin >> cr;
		cout << "chu vi hinh chu nhat =  " << (cd + cr) * 2;
		break;
	case 3:
		float r,p;
		cout << "nhap so r = " << endl;
		cin >> r;
		p = r * 2 * 3.14;
		cout << "chu vi hinh tron = " << p << endl;
		break;
	}
}