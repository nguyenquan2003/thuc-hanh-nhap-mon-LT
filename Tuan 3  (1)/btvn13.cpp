#include <iostream>
using namespace std;
bool check(int n)
{
    while (n > 0)
    {
        int temp = n % 10;
        if (temp % 2 == 1)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int n;
    do
    {
        cout << "nhap n = ";
        cin >> n;
    } 
    while (n < 0);
    if (check(n) == true)
        cout << "so " << n << " la so chan  ";
    else
        cout << "so " << n << " khong phai la so chan ";
}