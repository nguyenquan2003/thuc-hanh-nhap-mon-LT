#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n = ";
    cin >> n;
    switch (n)
    {
    case 1:
        int tong = 0;
        for (int i = 1; i <= 100; i++)
        {
            tong = tong + i;
        }
        cout << "tong = 1 +..+100 = " << tong;
            break;
    case 2:
        int tong = 0;
        cout << "nhap a = ";
        cin >> a;
        int a;
        for (int i = 0; i <= a; i++)
        {
            tong = tong + i ;
        }
        cout << "tong = 1 +..+n = " << tong;
        break;
    case 3:
        int m, n;
        cout << "nhap m = ";
        cin >> m;
        cout << "nhap n = ";
        cin >> n;
        cout << "cac so chan trong doan " << m << n;
        for (int i = m; i <= n; i++)
        {
            if (i % 2 == 0)
        }
        cout << i;
        break;
    }
}

