#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 100
using namespace std;
void NhapMang(int a[], int& n);
void XuatMang(int a[], int n);
void CreateArrayAuto(int a[], int& n);
void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}
void CreateArrayAuto(int a[], int& n)
{
	cout << "Nhap so phan tu:";
	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 200 - 99;
	}
}

void XuatPTChanMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << "\t";
}
int DemPTduong(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
int TongPTam(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			tong = tong + a[i];
	return tong;
}
int TimX(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
		{
			return i;
			break;
		}
	return -1;
}
void Min_Max(int a[], int n)
{
	int min, max;
	min = max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	cout << "\n So nho nhat cua mang: " << min;
	cout << "\n So lon nhat cua mang: " << max;
}
void ThemXvaovitriK(int a[], int& n, int giatri, int vitri)
{
	if (vitri < 0)
	{
		for (int i = n - 1; i >= 0; i--)
			a[i + 1] = a[i];
		a[0] = giatri;
		n++;
	}
	else if (vitri > n)
	{
		a[n] = giatri;
		n++;
	}
	else
	{
		for (int i = n - 1; i >= vitri; i--)
			a[i + 1] = a[i];
		a[vitri] = giatri;
		n++;
	}
}
void Tongchanle(int a[], int n)
{
	int tongchan = 0;
	int tongle = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			tongchan += a[i];
		else
			tongle += a[i];
	}
	cout << "\nTong cac phan tu chan trong mang la: " << tongchan;
	cout << "\nTong cac phan tu le trong mang la: " << tongle;

}
void Kiemtrachan(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			flag = 0;
			break;
		}
	if (flag)
		printf("Mang toan so chan");
	else
		printf("Mang khong toàn so chan");
}
void kiemtraChanle(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0)) //khong chan le
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		cout << "Mang chan le lien tuc";
	else
		cout << "Mang khong chan le lien tuc";
}
void Xuattronchuc(int a[], int n)
{
	cout << "\n Xuat cac phan tu tron chuc ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 10 == 0)
			cin >> a[i];
	}
}
void ThemXsauPTdau(int a[], int& n, int x)
{
	for (int i = n - 1; i > 0; i--)
		a[i + 1] = a[i];
	a[1] = x;
	n++;
}
void themXsauMax(int a[], int& n, int x)
{
	int vitri = 0;
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
		{
			max = a[i];
			vitri = i;
		}
	for (int i = n - 1; i > vitri; i--)
		a[i + 1] = a[i];
	a[vitri + 1] = x;
	n++;
}
void XoaXdautien(int a[], int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			for (int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
			break;
		}

	}
}
void XoatatcaX(int a[], int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			for (int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
		}

	}
}
void XoaXtaiK(int a[], int& n, int giatri, int vitri)
{
	if (a[vitri] != giatri)
		return;
	for (int i = vitri; i < n - 1; i++)
		a[i] = a[i + 1];
	n--;
}
void Daomang(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int tam = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tam;
	}
}
void Kiemtradoixung(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - i - 1])
		{
			flag = 0;
			break;
		}

	}
	if (flag)
		cout << "Mang doi xung.";
	else
		cout << "Mang khong doi xung.";
}
void main()
{
	int a[MAX];
	float b[MAX];
	int n, chon, x, i;
	do
	{
		cout << "\n0. Thoat";
		cout << "\n1. Nhap mang.";
		cout << "\n2. Tao mang tu dong.";
		cout << "\n3. Xuat mang.";
		cout << "\n4. Xuat Phan tu Chan.";
		cout << "\n5. Dem cac phan tu duong.";
		cout << "\n6. Tong cac  phan tu am.";
		cout << "\n7. Tim X trong mang.";
		cout << "\n8. Tim min, max trong mang";
		cout << "\n9. Them X vao vi tri k";
		cout << "\n10. Tong Chan, Le";
		cout << "\n11. Kiem tra mang toan chan.";
		cout << "\n12. Kiem tra mang chan.le ";
		cout << "\n13. Xuat tron chuc";
		cout << "\n14. Them sau PT dau.";
		cout << "\n15. Them sau Max ";
		cout << "\n16. Xoa X ";
		cout << "\n17. Xoa Tat ca X ";
		cout << "\n18. Xoa X tai vi tri K ";
		cout << "\n NHap gia tri lua chon: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			NhapMang(a, n);
			XuatMang(a, n);
			break;
		case 2:
			CreateArrayAuto(a, n);
			XuatMang(a, n);
			break;
		case 3:
			XuatMang(a, n);
			break;
		case 4:
			XuatPTChanMang(a, n);
			break;
		case 5:
			printf("So cac PT duong la %d ", DemPTduong(a, n));
			break;
		case 6:
			printf("Tong cac PT am la %d ", TongPTam(a, n));
			break;
		case 7:
			cout << "NHap gia tri can tim: ";
			cin >> x;
			i = TimX(a, n, x);
			if (i != -1)
				cout << "Tim thay %d tai vi tri %d " << x << i;
			else
				cout << "Khong tim thay %d" << x;
			break;
		case 8:
			Min_Max(a, n);
			break;
		case 9:
			cout << "NHap vi tri can them: ";
			cin >> i;
			cout << "NHap gia tri can them: ";
			cin >> x;
			ThemXvaovitriK(a, n, x, i);
			XuatMang(a, n);
			break;
		case 10:
			Tongchanle(a, n);
			break;
		case 11:
			Kiemtrachan(a, n);
			break;
		case 12:
			kiemtraChanle(a, n);
			break;
		case 13:
			Xuattronchuc(a, n);
			break;
		case 14:
			cout << "NHap gia tri can them: ";
			cin >> x;
			ThemXsauPTdau(a, n, x);
			XuatMang(a, n);
			break;
		case 15:
			cout << "NHap gia tri can them: ";
			cin >> x;
			themXsauMax(a, n, x);
			XuatMang(a, n);
			break;
		case 16:
			cout << "NHap gia tri can xoa: ";
			cin >> x;
			XoaXdautien(a, n, x);
			XuatMang(a, n);
			break;
		case 17:
			cout << "NHap gia tri can xoa: ";
			cin >> x;
			XoatatcaX(a, n, x);
			XuatMang(a, n);
			break;
		case 18:
			cout << "NHap gia tri can xoa: ";
			cin >> x;
			cout << "NHap vi tri can xoa: ";
			cin >> x;
			XoaXtaiK(a, n, x, i);
			XuatMang(a, n);
			break;
		case 19:
			Daomang(a, n);
			XuatMang(a, n);
			break;
		case 20:
			Kiemtradoixung(a, n);
			break;
		}
	} while (chon != 0);
}

