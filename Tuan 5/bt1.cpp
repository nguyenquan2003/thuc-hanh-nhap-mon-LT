#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 30
void nhapMang(int a[], int& n);
void randomMang(int a[], int& n);
void xuatMang(int a[], int n);

int main()
{
	int a[max], n;
	//nhapMang(a, n);
	randomMang(a, n);
	printf("\nMang vua nhap la: ");
	xuatMang(a, n);
	getch();
}
void nhapMang(int a[], int& n)
{
	do
	{
		printf("Nhap so phan tu cua mang n: ");
		scanf("%d", &n);
	} while (n < 0 || n>30);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void randomMang(int a[], int& n)
{
	do
	{
		printf("Nhap so phan tu cua mang n: ");
		scanf("%d", &n);
	} while (n < 0 || n>30);
	for (int i = 0; i < n; i++)
	{
		int x;
		x = rand();
		a[i] = x;
	}
}
void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d \n", &a[i]);
}
