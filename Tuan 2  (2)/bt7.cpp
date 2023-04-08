#include <iostream>
using namespace std;
int main()
{
    float toan, ly, hoa, van, anh, su;
    cout << "nhap diem toan : ";
    cin >> toan;
    cout << "nhap diem ly : ";
    cin >> ly;
    cout << "nhap diem hoa: ";
    cin >> hoa;
    cout << "nhap diem van : ";
    cin >> van;
    cout << "nhap diem anh : ";
    cin >> anh;
    cout << "nhap diem su : ";
    cin >> su;
    float diemtb;
    diemtb = (toan + ly + hoa + van + anh + su) / 6;
    if (diemtb >= 8)
    {
        cout << "loai gioi ";
    }
    else if (diemtb >= 7)
    {
        cout << "loai kha ";
    }
    else if (diemtb >= 5)
    {
        cout << "loai trung binh ";
    }
    else
        cout << "loai yeu ";
    return 0;
}