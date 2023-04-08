#include <iostream>
using namespace std;
int main()
{
	int n, tien;
	cout << " nhap so don vi tieu thu dien " << endl;
	cin >> n;
	if (n <= 100)
		tien = 5 * n;
	else
	{
		if (n > 100 && n <= 150)
			tien = 100 * 5 + (n - 100) * 7;
		if (n > 150 && n <= 200)
			tien = 100 * 5 + 50 * 7 + 10 * (n - 150);
		else if (n > 200 && n <= 300)
			tien = 100 * 5 + 50 * 7 + 10 * 50 + 15 * (n - 200);
		else
			tien = 100 * 5 + 50 * 7 + 10 * 50 + 15 * 100 + 20*(n - 300);
	}
	cout << "so tien phai tra la " << n << tien << endl;
	return 0;
}