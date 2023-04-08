#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<fstream>

struct Nhanvien {
	int mssv;
	char Ten[35];
	float dqt;
	float dt;
	int timms;
};
void Docfile(Nhanvien a[], int& n) {
	FILE* f;
	f = fopen("dsSinhVien.txt", "r");
	if (f == NULL) {
		printf("\nERROR");
		return;
	}
	else {
		fscanf(f, "%d", &n);
		char tam;
		for (int i = 0; i < n; i++) {
			fscanf(f, "%d#", &a[i].mssv);
			fscanf(f, "%[^#]#", &a[i].Ten);
			fscanf(f, "%f#", &a[i].dqt);
			fscanf(f, "%f\n", &a[i].dt);
		}
	}
	fclose(f);
}
void Xuat(Nhanvien a[], int n) {
	printf("\n==========DANH SACH NHAN VIEN==========");
	for (int i = 0; i < n; i++) {
		printf("\nMa : %d", a[i].mssv);
		printf("\nTen : %s", a[i].Ten);
		printf("\nHe so luong : %.2f", a[i].dqt);
		printf("\nChuc vu: %f", a[i].dt);
		printf("\n");
	}
	printf("\n===============================================");
}
void Tinh(Nhanvien a[], int n) {
	printf("\n Nhap ma so sinh vien can tim: ");
	scanf("%d", &a[35].timms);
	for (int i = 0; i < n; i++) {
		if (a[i].mssv == a[i].timms) {
			printf("\nMa : %d", a[i].mssv);
			printf("\nTen : %s", a[i].Ten);
			printf("\ndiem qua trinh : %.2f", a[i].dqt);
			printf("\ndiem thi: %f", a[i].dt);
			printf("\n");
		}
		else
			printf("\n khong co sinh vien ma so %d", a[i].timms);
	}
	printf("\n");
}
float Tinhdtk(Nhanvien a[], int n) {
	float dtk;
	for (int i = 0; i < n; i++) {
		dtk = a[i].dqt * 0.3 + a[i].dt * 0.7;
		return dtk;
	}
}
void xeploai(Nhanvien a[], int n)
{
	float d = Tinhdtk(a, n);
	if (d >= 4)
	{
		printf("\n xep loai D");
	}
	else if (d < 4) {
		printf("\n xep loai K");
	}
}
void menu();
int main() {
	menu();
	getch();
	return 0;
}
void menu()
{
	int menu;
	printf("\n nhap menu: ");
	scanf("%d", &menu);
	do {
		switch (menu)
		{
			Nhanvien a[200];
			int n;
			Docfile(a, n);
			Xuat(a, n);
		case 1:
		{
			Docfile(a, n);
			Xuat(a, n);
			break;
		}
		case 2: {
			Docfile(a, n);
			Tinh(a, n);
			break;
		}
		case 3:
			Docfile(a, n);
			Tinhdtk(a, n);
			Xuat(a, n);
			printf("\n diem tong ket= %.3f", Tinhdtk(a, n));
		case 4:
			Docfile(a, n);
			printf("\n==========DANH SACH NHAN VIEN==========");
			for (int i = 0; i < n; i++) {
				printf("\nMa : %d", a[i].mssv);
				printf("\nTen : %s", a[i].Ten);
				printf("\nHe so luong : %.2f", a[i].dqt);
				printf("\nChuc vu: %f", a[i].dt);
				xeploai(a, n);
				printf("\n");
			}
			printf("\n===============================================");
		}
	} while (menu != 0);
}
