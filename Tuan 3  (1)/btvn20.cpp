#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, dem = 0;
    do {
        cout<<"Nhap so tien von: ";
        cin >> n;
    } while (n < 0);
    float a = n * 0.007;
    float tien = a + n;
    while (tien < 1000)
    {
        tien += tien * 0.007;
        dem++;
    }
    cout<<"\n So thang can qui de duoc so tien lon hon 1000USD la: "<< dem;
    return 0;
}