#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x = 3;
	cout << "Boi so cua so 3 la : ";
	for (int y = 10; y <= 99; y++)
	{
		if (y % 3 == 0)
			cout << y << "  ";
	}
	return 0;
}