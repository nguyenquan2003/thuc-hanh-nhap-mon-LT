#include<stdio.h> 
#include<conio.h> 
#include <math.h> 
struct CongNhan
{
	char ten[50];
	int namsinh;
	int giolam;
};
void NhapMangCN(int& n, CongNhan a[])
{
	do
	{
		printf("Cho biet so cong nhan: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		printf("Thong tin cong nhan thu %d la:", i + 1);
		printf("\nTen la:");
		fflush(stdin);

		gets_s(a[i].ten, 100);
		printf("Nam Sinh:");
		scanf_s("%d", &a[i].namsinh);
		printf("Gio lam:");
		scanf_s("%d", &a[i].giolam);
	}
}
void XuatMangCN(CongNhan a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n====================");
		printf("\nThong tin cong nhan thu %d la:", i + 1);  printf("\nTen la: %s", a[i].ten);
		printf("\nNam Sinh la %d:", a[i].namsinh);  printf("\nGio lam %d:", a[i].giolam);
	}
}
void XuatCN(CongNhan x, int i)
{
	printf("\nThong tin cong nhan nhan thuong la:", i + 1); printf("\nTen la: %s", x.ten);
	printf("\nNam Sinh la %d:", x.namsinh);
	printf("\nGio lam %d:", x.giolam);
}
void ThuongCN(CongNhan a[], int n)
{
	printf("\n====================");
	printf("\nDanh sach cong nhan nhan thuong:"); for (int i = 0; i < n; i++)
	{
		if (a[i].giolam > 40)
		{
			XuatCN(a[i], i);
		}
	}
}
void InsertionSort(CongNhan a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		CongNhan x = a[i];
		for (int j = i - 1; (j >= 0 && a[j].giolam < x.giolam); j--) {
			a[j + 1] = a[j];
			a[j] = x;
		}
	}
}

void SapXep(CongNhan a[], int n)
{
	InsertionSort(a, n);
}
void doc(CongNhan a[], int& n)
{
	FILE* f;
	f = fopen("file.txt", "r");
	if (f == NULL)
	{
		printf("loi mo file! ");
		return;
	}
	fscanf(f, "%d", &n);
	char tam;
	fscanf(f, "%c", &tam);
	for (int i = 0; i < n; i++)
	{
		fgets(a[i].ten, 30, f);
		a[i].ten[strlen(a[i].ten) - 1] = '\0';
		fscanf(f, "%d", &a[i].namsinh);
		fscanf(f, "%d", &a[i].giolam);
		fscanf(f, "%c", &tam);
	}
}
void main()
{
	CongNhan A[1000];
	int N;
	NhapMangCN(N, A);
	ThuongCN(A, N);
	SapXep(A, N);
	XuatMangCN(A, N);
}
