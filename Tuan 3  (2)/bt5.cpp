#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    if (n <= 0)
        cout << "nhap n = ";
    else
        cout << "cac so chan : ";
    for (int i = 0; i < n; i+=2)
    {
        cout << i<<" ";
    }

}

