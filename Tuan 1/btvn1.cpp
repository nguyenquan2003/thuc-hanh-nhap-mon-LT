#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a;
    cout << "nhap a = ";
    cin >> a;
    int b = (float)a;
    int phandu = (a - b) * 100;
    cout << "phan nguyen cua so thuc la : " << b << endl;
    cout << "2 so thap phan cua so thuc : "<<phandu<<endl;
    cout << "so thuc voi 2 so thap phan la: " << a << endl;
    cout << "tong la : " << a + b << endl;
    return 0;
}
