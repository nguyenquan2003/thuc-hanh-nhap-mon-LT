#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap so = ";
	cin >> n;
	cout << "dao nguoc so ";
	while (n != 0)
	{
		int b = n % 10;
		cout << b;
		n /= 10;
		
	}
	

}