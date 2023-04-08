#include <iostream>
using namespace std;
int main()
{	int n, i = 2;
	long s = 1;
	cout << "nhap n = ";
	cin >> n;
	while (i <= n)
	{
		s += i;
		i++;
	}
	cout << "s= " << s;
}