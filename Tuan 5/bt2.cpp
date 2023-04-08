#include <iostream>
using namespace std;
void nhapst(float b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "]=";
		cin >> b[i];
	}
}
void xuatst(float b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << "\t";
	}

}
int main()
{
	float b[30];
	int n;
	cout << "nhap n = ";
	cin >> n;
	cout << "nhap mang ";
	nhapst(b, n);
	cout << "xuat mang ";
	xuatst(b, n);
}