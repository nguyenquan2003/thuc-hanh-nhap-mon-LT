#include <iostream>
#include<math.h>
using namespace std;
#define hs 10
int main()
{
	float a, b, c, d;
	do 
	{
		cout << "nhap cot diem thu nhat : ";
		cin >> a;
		cout << "nhap cot diem thu hai : ";
		cin >> b;
		cout << "nhap cot diem thu ba : ";
		cin >> c;
		cout << "nhap cot diem thu tu : ";
		cin >> d;
	} while (a > 10 || b > 10 || c > 10 || d > 10);
	float TB = ((a + b + c + d) * hs) / (4 * hs);
	cout << "diem trung binh la : " << TB;
	if (TB >= 8.5 && TB <= 10)
		cout << "diem A ";
	if (TB >= 7.0 && TB <= 8.4)
		cout << "diem B ";
	if (TB >= 5.5 && TB <= 6.9)
		cout << "diem C ";
	else if (TB >= 4.0 && TB <= 5.4)
		cout << "diem D ";
	else
		cout << "diem F ";
	return 0;

}