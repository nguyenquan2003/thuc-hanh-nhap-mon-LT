#include <iostream>
using namespace std;
int main()
{
	string a;
	int b, c;
	// gọi a là tên sản phẩm, b là số lượng, c là đơn giá
	cout << "nhap ten san pham :";
	cin >> a;
	cout << "\n";
	cout << "nhap so luong : ";
	cin >> b;
	cout << "\n";
	cout << "nhap don gia : ";
	cin >> c;
	cout << "\n";
	cout << "so tien phai tra la : " << b * c << endl;
	cout << "thue gia tri gia tang phai tra la : " << 0.1 * b * c << endl;
	return 0;
}
