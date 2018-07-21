#include <iostream>
using namespace std;
void main()
{
	int arr[100], n;
	cout << " nhap so phan tu mang :"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << " nhap phan tu thu " << i + 1 << " :"; cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";	
	}
	int d;
	cout << " \ncan xoa phan tu thu :"; cin >> d;
	for (d; d <= n; d++)
	{
		arr[d-1] = arr[d];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	system("pause");

}