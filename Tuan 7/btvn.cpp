#include <iostream>
using namespace std;
void nhap(int a[][100], int& m, int& n)
{
	do
	{
		cout << "cho biet so dong cua mang ";
		cin >> m;
	} while (m <= 0);
	do
	{
		cout << "cho biet so cot cua mang ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Gia tri phan tu a " << "[" << i << "]" << "[" << j << "] =";
			cin >> a[i][j];

		}
	}
}
void xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << " "<<a[i][j];
			cout << endl;
	}
}
void xuatdgcheo(int a[][100], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "\n " << a[i][j];
		}
		cout << "phan tu tren duong cheo phu la " << a[i][n - 1 - i] << endl;
	}
}
void xuattgtren(int a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
				a[i][j] = 0;
			cout << "\n " << a[i][j];
		}
		cout << endl;
	}
}
void timcot(int a[][100], int m, int n)
{
	int b[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[i] += a[j][i];
		}
	}

	int Max = b[0];
	for (int i = 1; i < n; i++)
	{
		Max = (Max > b[i]) ? Max : b[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (Max == b[i])
		{
			cout << " Cot co tong ptu lon nhat la " << Max;
		}
	}
}
void max(int a[][100], int m, int n)
{
	int max, dem = 0, i = 0;
	for (int j = 0; j < n; j++)
		if (a[0][j] % 2 == 0)dem++;
	max = dem;
	m = i + 1;
	for (i = 1; i < m; i++)
	{
		dem = 0;
		for (int j = 0; j < n; j++)
			if (a[j][i] % 2 == 0)dem++;
		if (max < dem)
		{
			max = dem;
			m = i + 1;
		}
	}
	cout << "Vay dong co nhieu so chan nho nhat la " << max;
}
void tinh(int a[][100], int m, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i][i];
	}
	cout << "tong duong cheo chinh la " << tong;
}
void tinhtongtgtren(int a[][100],int m,int n)
{
	int tong=0;
	 for (int i = 0; i < m; i++)
        	for (int j = 0; j < n; j++) 
		  {
			  if(i<=j)
			  if(a[i][j]%2==0)
			  {
				  tong=tong+a[i][j];
			  }
		  }
		  cout<<"tong cac so chan tam giac tren la "<<tong;
	
}
void tinhtongtgduoi(int a[][100], int m,int n)
{
	int tong=0;
	 for (int i = 0; i < m; i++)
        	for (int j = 0; j < n; j++) 
		{
			if(j<=i)
			if(a[i][j]%2!=0)
			{
				tong=tong+a[i][j];
			}
		}
		cout<<"tong cac so le tam giac duoi la "<<tong;
}
void xuatcacdongtang(int a[][100], int m, int n)
{
   for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << " "<<a[i][j];
			cout << endl;
	}
}
void TinhTongCacDong(int a[][100], int n, int m, int b[])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[i] += a[i][j];
        }
    }
}
void SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(int a[][100], int m, int n)
{
    
    for (int i = 0; i < m - 1; i++)  
    {   
        for (int j= i + 1; j < m; j++)   
        {    
            if (i > j)    
            {
               a[i][j] = 0;
			cout << "\n " << a[i][j]; 
            }
        }
    }
}
int main()
{
	int a[100][100];
	int m, n, b;
	cout << "-----MENU---- " << endl;
	cout << "1. xuat cac phan tu tren duong cheo phu " << endl;
	cout << "2. xuat cac phan tu thuoc tam giac tren " << endl;
	cout << "3. tim cot co tong lon nhat trong ma tran " << endl;
	cout << "4. tim dong co tong chan nho nhat trong ma tran " << endl;
	cout << "5. tinh tong cac phan tu tren duong cheo chinh " << endl;
	cout<<"6. tinh tong cac phan tu chan thuoc tam giac tren "<<endl;
	cout<<"7. tinh tong cac phan tu le thuoc tam giac duoi "<<endl;
	cout<<"9. xuat cac dong tang dan "<<endl;
	cout<<"14. sap xep theo quy tac tong cac dong tang dan "<<endl;
	cout << " moi ban chon bai : ";
	cin >> b;
	nhap(a, n, m);
	switch (b)
	{
	case 1: xuatdgcheo(a, m, n); break;
	case 2: xuattgtren(a, n, m); break;
	case 3: xuat(a, n, m);
		timcot(a, m, n); break;
	case 4: max(a, m, n); break;
	case 5: tinh(a, m, n); break;
	case 6: xuat(a, n, m);
	tinhtongtgtren(a,m,n); break;
	case 7: xuat(a, n, m);
	tinhtongtgduoi(a,m,n); break;
	case 9: xuatcacdongtang(a,m,n); break;
	case 14: SapXepCacDongDuaVaoTongCacPhanTuTrong1Dong(a,n,m); break;
	}
	
}