
#include <iostream>
using namespace std;
void tich2matran(int arr[][100], int a,int b, int brr[][100], int c, int d, int crr[][100]) // a,c la dong , b,d la cot
{
	if (b == c)
	{
		for (int i = 0; i <a ;i++)
			for (int j = 0 ; j < d; j++)
			{
			crr[i][j] = 0;
			for (int t = 0; t < b ; t++)
				{
				crr[i][j] += arr[i][t] * brr[t][j];
				}
			} 
		}
	for (int i = 0 ; i < a; i++)
	{
		for (int j = 0; j < d ; j++)
		{
			cout << crr[i][j] << "  ";
		}
		cout << "\n";
	}

}
void main()
{
	int arr[100][100], m, n, brr[100][100], e, f, crr[100][100] ;
cout << " nhap so dong so cot cua mang 1 : "; cin >> m >> n;// m la chỉ số hàng n là chỉ số cột của mt1
for (int i = 0; i < m; i++)
	for (int j = 0; j < n; j++)
	{
		system("cls");
		cout << " nhap phan tu hang " << i + 1 << " cot " << j + 1 << " la : ";
		cin >> arr[i][j];
	}
cout << " nhap so dong so cot cua mang 2 : ";  cin >> e >> f;// e la chỉ số hàng f là chỉ số cột của mt2
for (int i = 0; i < e; i++)
	for (int j = 0; j < f; j++)
	{
		system("cls");
		cout << " nhap phan tu hang " << i + 1 << " cot " << j + 1 << " la : ";
		cin >> brr[i][j];
	}

system("cls");
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << arr[i][j] << "  ";
	}
	cout << "\n";
}
cout << " \n\n";
for (int i = 0; i < e; i++)
{
	for (int j = 0; j < f; j++)
	{
		cout << brr[i][j] << "  ";
	}
	cout << "\n";
}
cout << " \n\n";
tich2matran(arr, m, n, brr, e, f, crr );


system("pause");

}