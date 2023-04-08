#include <iostream>
using namespace std;
int main()
{
    int n;
    float S = 1;
    cout << "nhap so can tinh = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        S += S * i;
    }
    cout << "S=1*...*n = " << S;
}

