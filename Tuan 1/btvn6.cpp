#include <iostream>
using namespace std;
int main()
{
	char kitu;
	cout << "nhap ki tu : ";
	cin >> kitu;
	int a = int(kitu);
	if (97 <= a && a < 122)
	{
		cout << "ki tu thuoc 26 chu cai tieng anh ";
		a -= 32;
		
	}
	else
		cout << "ki tu khong thuoc 26 chu cai tieng anh ";
}
