#include <iostream>
using namespace std;
int main()
{
    int x;
    int n;
    int lt = 1;
    int s = 0;
    cout<<"Nhap x: ";
    cin>>x;
    cout"Nhap n: ";
    cin>>n;
    //Nhap gia tri x, n
    for (int i = 1; i <= n; i++) {
        lt = lt * x;
        s += lt;
    }
    //Tinh s = x^1 + x^2 + .. + x^n
    cout<<"S= "<<s;
}