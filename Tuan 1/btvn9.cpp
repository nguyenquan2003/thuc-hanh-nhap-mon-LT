#include <iostream>
using namespace std;
int main()
{
	float a, b, c, x1, x2, delta;
	cout<<"Nhap vao he so a, b, c "; 
	cin>>a>>b>>c;
	if (a == 0) {
		cout<<"\nHe so phai khac 0";
	}
	else {
		delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			cout<<"\nPhuong trinh co nghiem phan biet: x1=%.2f va x2=%.2f", x1, x2;
		}
		else if (delta == 0) {
			x1 = -b / (2 * a);
			cout<<"\nPhuong trinh co nghiem kep x1=x2=%.2f", x1;
		}
	}
}