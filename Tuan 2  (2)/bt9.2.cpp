#include <iostream>
using namespace std;
int main()
{
    int n, s=1;
    cout << "nhap so can tinh = ";
    cin >> n;
    for (int i = 2; i <= 20; i++)
    {
        if (i % 2 == 0)
        s = s + i;
    }
    cout << "S= " << s;
}

