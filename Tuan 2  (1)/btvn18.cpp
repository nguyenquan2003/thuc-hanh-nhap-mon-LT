#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "nhap n = ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        s = n / n + 1;
    }
    cout << "S= " << s;
}

