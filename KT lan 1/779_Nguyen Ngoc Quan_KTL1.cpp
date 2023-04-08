#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("chon1 hay 2: "); scanf("%d", &n);
	switch (n) {
	case 1: {
		int a, b, c, d;
		printf("Nhap A(xa,ya): "); scanf("%d %d", &a, &b);
		printf("Nhap B(xb,yb): "); scanf("%d %d", &c, &d);
		float Tinh = sqrt(pow(c - a, 2) + pow(d - b, 2));
		printf("Khoang cach la: %.3f", Tinh);
		break;
	}
	case 2: {
		int a, b;
		long tien;
		do {
			printf("Nhap chi so dien cu: "); scanf("%d", &a);
			printf("Nhap chi so dien moi: "); scanf("%d", &b);
		} while (b <= a && a < 0 && b < 0);
		int t = b - a;
		printf("\n");
		if (t >= 0 && t <= 100)
			tien = t * 500;
		else
		{
			if (t > 100 && t <= 250)
				tien = 100 * 500 + (t - 100) * 800;
			else if (t <= 350)
				tien = 100 * 500 + 150 * 800 + 1000 * (t - 250);
			else
				tien = 100 * 500 + 150 * 800 + 1000 * 100 + 1500 * (t - 350);
		}
		printf("So tien phai tra ung voi %dKW là:%d$", t, tien);
		break;
	}
	}

	getch();
	return 0;
}