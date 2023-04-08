// btvn15.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main()
{
		int n;
		do
		{
			cout<<"\nNhap vao n ( n > 0 ): ";
			cin >> n;

			if (n <= 0)
			{
				cout<<"\nGia tri ban nhap vao khong hop le. Xin vui long nhap lai! ";
			}

		} while (n <= 0);

		bool CheckTangDan = true;
		int themang = n;
		int ChuSoCuoi = themang % 10;  // lấy ra chữ số cuối
		themang /= 10;

		cout<<"\nCac chu so co tang dan tu trai sang phai khong ?\n "<< n;
		while (themang != 0)
		{
			int ChuSoKeCuoi = themang % 10;
			themang /= 10;
			if (ChuSoCuoi < ChuSoKeCuoi)
			{
				CheckTangDan = false;
				break;
			}
			else
			{
				ChuSoCuoi = ChuSoKeCuoi;  // Cập nhật lại chữ số cho lần so sánh tiếp theo
			}
		}
		if (CheckTangDan)
			cout<<"\n Dung !";
		else
			cout<<"Sai !";
		return 0;
	}

