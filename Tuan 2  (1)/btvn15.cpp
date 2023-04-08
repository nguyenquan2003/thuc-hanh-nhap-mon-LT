#include <iostream>
using namespace std;
int main()
{
    int n, i;
    float s = 1;
    cout << "nhap n = ";
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        s = s + 1 / i;
    }
    cout << "tong la : " << s;
    return 0;
}

