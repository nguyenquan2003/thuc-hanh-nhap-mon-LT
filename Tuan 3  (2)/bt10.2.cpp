#include <iostream>
using namespace std;
int main()
{
    int n,tong=0;
    cout << "nhap n = ";
    cin >> n;
    while (n > 0)
    {
        tong += n % 10;
        n /=10;
    }
    cout << "tong cac so cua n la: " << tong;
}

