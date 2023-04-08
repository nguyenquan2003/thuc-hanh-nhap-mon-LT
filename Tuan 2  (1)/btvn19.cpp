#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	nhap:
	int n;
	cout<<"Nhap gia tri cua n :";
	cin >> n;
	if (n < 1) 
	{
		goto nhap;
	}
	float S = 0;
	for (int i = 0; i <= n; i++) 
	{
		S = S + (2 * i + 1) * pow((2 * i + 2), -1);
	}
	cout<<"\nGia Tri Cua S = "<<S;
}