#include <iostream>
using namespace std;
#include<math.h>
int main() 
{
	int n;
	cout<<"\nNhap gia tri cua n :";
	cin >> n;
	int x;
	cout<<"\nNhap gia tri cua x :";
	cin >> x;
	int T = 0;
	for (int i = 1; i <= n; i++) {
		T = T + pow(-1, i) * pow(x, i);
	}
	cout<<"\n S= "<<T;
}