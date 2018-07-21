#include <iostream>
using namespace std;
void ktmang2cdoixung(int arr[][100] , int n, int m)
{ 
	int dem = 0;
	if (m == n)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n - i; j++)
			{
				if (arr[i][j] != arr[j][i])
				{
					dem++;
				}
			}
		if (dem != 0)
			cout << " mang khong doi xung qua duong cheo chinh \n";
		else
			cout << " mang doi xung qua duong cheo chinh \n";
	}
	else
		cout << " mang khong vuong nen khong co duong cheo chinh ";
	
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
	ktmang2cdoixung(arr, m, n);
	system("pause");

}