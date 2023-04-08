#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap nam : "; 
	cin >> n;
	if (n % 4 == 0 && n % 100 != 0)
		cout<<"\n là nam nhuan!\n"<<n;
	else
		cout<<"\n khong phai la nam nhuan!\n "<<n;

	return 0;
}