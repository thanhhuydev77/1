#include <iostream>
using namespace std;
void tinhtongmang ( int arr[][100] , int m, int n)
{   
	int s = 0, s2 =0, s3 = 0,sa= 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			s = s + arr[i][j];
		}
		cout << " tong ca phan tu tren hang " << i+1 << " la : " << s << " \n";
		s = 0;
	}
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			sa += arr[i][j];
			s = s + arr[i][j];
			if (i == j)
				s2 += arr[i][j];
			if (i + j + 1 == m)
				s3 += arr[i][j];
		}
		cout << " tong cua cot " << j + 1 << " la : " << s << "\n";
		s = 0;
	}
	cout << " tong cac phan tu tren duong cheo chinh la " << s2 << " \n";
	cout << " tong cac phan tu tren duong cheo phu la " << s3 << " \n";
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++ )
		{
			s += arr[i][j];
		}
	cout << " tong nua tren cua tra tran la : " << s - s2 << " \n";
	cout << " tong nua duoi cua tra tran la : " << sa - s << " \n";

}
void main()
{
	int arr[100][100], m, n;
	cout << " nhap so dong so cot cua mang : "; cin >> m >> n;// m la chỉ số hàng n là chỉ số cột
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			system("cls");
			cout << " nhap phan tu hang " << i + 1 << " cot " << j + 1 << " la : ";
			cin >> arr[i][j];
		}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << "\n";
	}
	tinhtongmang(arr, m, n);
	system("pause");

}