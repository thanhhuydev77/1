#include <iostream>
using namespace std;
void ktmangdonvi (int arr[][100], int a, int b)
{
	if (a == b)
	{
		int dem = 0;
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			{
				if (arr[i][i] != 1 || arr[i][j] != 0)
					dem++;
			}
		if (dem == a)
			cout << " la ma tran don vi !\n";
		else
			cout << " khong phai ma tran don vi ! \n";
	}
	else
		cout << " day khong phai ma tran vuong nen khong phai ma tran don vi !\n";
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
	ktmangdonvi(arr, m, n);
	system("pause");

}