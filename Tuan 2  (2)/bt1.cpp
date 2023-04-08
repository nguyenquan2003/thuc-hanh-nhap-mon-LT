#include <iostream>
using namespace std;
int main()
{
    float tl, gk, ck;
    cout << "nhap diem tieu luan : ";
    cin >> tl;
    cout << "nhap diem giua ky : ";
    cin >> gk;
    cout << "nhap diem cuoi ky : ";
    cin >> ck;
    float diemtb;
    diemtb = 0.2*tl+0.3*gk+0.5*ck;
    if (diemtb >= 8.5)
    {
        cout << "ban duoc diem A " << endl;
    }
    else if (diemtb >= 7.0)
    {
        cout << "ban duoc diem B " << endl;
    }
    else if (diemtb >= 5.5)

    {
        cout << "ban duoc diem C " << endl;
    }
    else if (diemtb >= 4.0)
    {
        cout << "ban duoc diem D " << endl;
    }
    else
        cout << "ban duoc diem F " << endl;
}
