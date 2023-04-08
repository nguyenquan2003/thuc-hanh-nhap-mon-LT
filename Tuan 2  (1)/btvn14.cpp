#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "nhap ki tu vao: ";
	cin >> n;
	switch (n)
	{
	case 10: cout << "A la 10 "; break;
	case 11: cout << "B la 11 "; break;
	case 12: cout << "C la 12 "; break;
	case 13: cout << "D la 13 "; break;
	case 14: cout << "E la 14 "; break;
	case 15: cout << "F la 15 "; break;
	default:
		cout << "he thap phan khong dung ky so nay " << endl;
		break;
	}
}