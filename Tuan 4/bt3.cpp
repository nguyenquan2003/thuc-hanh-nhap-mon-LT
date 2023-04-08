#include<stdio.h>
#include<conio.h>
#include<math.h>
void Tinh()
{
	int x, n, i, kq = 1;
	printf("Nhap x: "); scanf("%d", &x);
	printf("\nNhap n: "); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		kq = kq * x;
	}
	printf("ket qua : %d", kq);
}
int main()
{
	Tinh();
	getch();
	return 0;
}