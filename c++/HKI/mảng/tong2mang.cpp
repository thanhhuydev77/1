#include <iostream>
using namespace std;
void tonghaimang ( int arr[][100] , int a , int b,int brr[][100], int e,int f)
{
	if (a == e && b == f)
	{
		system("cls");
		for (int i = 0; i < e; i++)
		{
			for (int j = 0; j < f; j++)
			{
				cout << arr[i][j] + brr[i][j]<<"  ";
			}
			cout << "\n";
		}
	}
	else
		cout << " hai mang khong co cung kich thuoc nen khong the cong";
}
void main()
{
	int arr[100][100], m, n, brr[100][100],e,f;
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
	tonghaimang(arr, m, n, brr, e, f);
	system("pause");

}