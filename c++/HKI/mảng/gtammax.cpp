#include <iostream>
using namespace std;
void main()
{
	int arr[100], n, maxam{-99999999};
	cout << " nhap so phan tu mang :"; cin >> n;
	for (int i = 0;i<n;i++)
	{
		cout << " nhap phan tu thu " << i + 1 << " :"; cin >> arr[i];
		if (arr[i] > maxam && arr[i] < 0)
			maxam = arr[i];
	}
	cout << " gia tri am lon nhat la :" << maxam<<"\n";
	system("pause");

}