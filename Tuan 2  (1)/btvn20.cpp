#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,s=1;
	cout << "nhap n = ";
	cin >> n;
	cout << "nhap x = ";
	cin >> x;
	for (int i = 0; i <= n; i++)
	{
		s = pow(x, n);
	}
	cout << "S = " << s;
}