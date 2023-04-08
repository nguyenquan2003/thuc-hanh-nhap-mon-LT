#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "nhap so : ";
    cin >> n;
	switch (n)
	{
	case 0:cout << "so khong "; break;
	case 1:cout << "so mot " ; break;
	case 2:cout << "so hai " ; break;
	case 3:cout << "so ba " ; break;
	case 4:cout << "so bon " ; break;
	case 5:cout << "so nam " ; break;
	case 6:cout << "so sau " ; break;
	case 7:cout << "so bay "; break;
	case 8:cout << "so tam " ; break;
	case 9:cout << "so chin " << n; break;
	}
}

