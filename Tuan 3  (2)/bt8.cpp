#include <iostream>
using namespace std;
int main()
{
    int n,tong=0;
    cout << "nhap n =";
    cin >> n;
      
    int tong = 0;
    while (n != 0)
    {
        tong = tong + n % 10;
        n = n / 10;
    }
    cout<<"tong cac chu so trong n la :"<< tong;

}

