#include <iostream>
using namespace std;
int main()
{
	int n, S = 0;
	cout << "nhap n = ";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		S = S + (float)1 / n * (n + 1);
	}
	cout << "s= " << S;
}