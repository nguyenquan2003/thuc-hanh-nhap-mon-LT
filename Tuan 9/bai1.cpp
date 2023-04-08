#include <iostream>
using namespace std;
struct thisinh
{
	char msts[20], ten[40], kv[30], xl[10];
	int toan, ly, hoa;
};
void nhapmang(thisinh a[], int& n, thisinh &ts)
{
	do
	{
		cout << "nhap so luong thi sinh : ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "nhap ma so : ";
		gets_s(ts.msts);
		fflush(stdin);

		cout << "nhap ho va ten : ";
		gets_s(ts.ten);
		fflush(stdin);

		cout << "nhap khu vuc thi : ";
		gets_s(ts.kv);
		fflush(stdin);

		cout << "nhap diem toan : ";
		cin >> ts.toan;

		cout << "nhap diem ly : ";
		cin >> ts.ly;

		cout << "nhap diem hoa : ";
		cin >> ts.hoa;
	}
}
void xuatmang(thisinh a[], int& n, thisinh& ts)
{
	for (int i = 0; i < n; i++)
		cout << "thong tin thi sinh thu " << i + 1 << endl;
	cout << "ma so : " << ts.msts << endl;
	cout << "ho va ten : " << ts.ten << endl;
	cout << "khu vuc thi : "<<ts.kv << endl;
	cout << "diem toan : " << ts.toan << endl;
	cout << "diem ly :" << ts.ly << endl;
	cout << "diem hoa : " << ts.hoa << endl;
}
int tinh(thisinh& ts)
{
	int diem = 0,n;
	cout << "nhap vi tri thi sinh ";
	cin >> n;
	for (int i = 0; i < n;i++)
	{
		if (diem > 8)
			diem = diem + 2;
		else if (diem > 7 && diem > 8)
			diem = diem + 1;
		else
			return 0;
	}
}
void main()
{
	int n;
	thisinh a[20],ts;
	nhapmang(a, n,ts);
	xuatmang(a, n,ts);
	tinh(ts);
}