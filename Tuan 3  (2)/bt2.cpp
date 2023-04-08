#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    do
    {
        switch (n)
        {
        case 1: cout << "HELLO "; break;
        case 2: cout << "vong lap for "; break;
        case 3: cout << "vong lap while "; break;
        case 4:cout << "thoat chuong trinh "; break;
        }
    }
    while (n != 4);
}