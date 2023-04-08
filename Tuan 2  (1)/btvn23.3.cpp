#include <iostream>
using namespace std;
int main()
{
    int i=0,tong = 0;
    if (i > 100)
    {
        cout << "yeu cau nhap lai ";
    }
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
            tong = tong + i;
    }
    cout << "tong cac so chan la :" << tong;

}

