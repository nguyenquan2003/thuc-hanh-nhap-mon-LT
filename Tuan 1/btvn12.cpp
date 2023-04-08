#include <iostream>
using namespace std;
#define c 20
#define t 45
int main()
{
	int a, b;
	cout<<"\nThoi gian lam viec tu 10h->24h";
	do {
		cout << "\nNhap thoi gian vao: ";
		cin >> a;
		cout << "\nNhap thoi gian ra: ";
		cin>>b;

	} while (a < 10 || b < a);
	int tg = b - a;
	int tien = (17 - a) * c + (b - 17) * t;
	cout << "\n Khach da thue duoc : " << tg << "h";
	if (a > 17 && b > 17)
		cout << "\nSo tien khach phai tra: " << tg * t << ".000 dong";
	else if (a <= 17 && a >= 10 && b <= 17 && b >= 10)
		cout << "\n So tien khach phai tra: " << tg * c << ".000 dong";
	else
		cout<<"\n So tien khach phai tra: "<< tien << ".000 dong";
	return 0;
}