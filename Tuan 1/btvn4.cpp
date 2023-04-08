#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;   //gọi a là chiều rộng, b là chiều dài
    cout << "nhap a = ";
    cin >> a;
    cout << "nhap b = ";
    cin >> b;
    cout << "dien tich HCN la : " << a * b << endl;
    cout << "chu vi HCN la : " << (a + b) * 2 << endl;
    //để tính dg chéo HCn ta áp dụng pytago
    cout << "do dai duong cheo la : " << float(sqrt(a*a+b*b));
    return 0;
}
