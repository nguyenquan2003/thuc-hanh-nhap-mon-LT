#include <iostream>
using namespace std;
int main()
{
    float toan, ly, hoa, heso;
    cout << "nhap diem thi toan : ";
    cin >> toan;
    cout << "nhap diem thi ly : ";
    cin >> ly;
    cout << "nhap diem thi hoa : ";
    cin >> hoa;
    cout << "nhap he so : ";
    cin >> heso;
    cout << "diem trung 3 mon la :" << ((toan + ly + hoa) * heso) / (3 * heso);
}
