#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "nhap a = ";
    cin >> a;
    cout << "nhap b = ";
    cin >> b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << "UCLN la : " << a;
}