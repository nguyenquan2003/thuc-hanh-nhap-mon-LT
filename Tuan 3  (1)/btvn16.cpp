#include <iostream>
using namespace std;
int main()
{
	int n;
	// Nhập n ( n > 0 )
	do
	{
		cout << "\nNhap vao n ( n > 0 ): ";
		cin >> n;

		if (n <= 0)
		{
			cout << "\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ";
		}

	} while (n <= 0);

	bool CheckGiamDan = true;
	int themang = n;
	int ChuSoCuoi = themang % 10;  // lấy ra chữ số cuối
	themang /= 10;

	cout << "\nCac chu so cua giam dan tu trai sang phai khong ?\n " << n;
	while (themang != 0)
	{
		int ChuSoKeCuoi = themang % 10;
		themang /= 10;
		if (ChuSoKeCuoi < ChuSoCuoi)
		{
			CheckGiamDan = false;
			break;
		}
		else
		{
			ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
		}
	}
	if (CheckGiamDan)
		cout << "\n Dung !";
	else
		cout << "Sai !";
	return 0;
}