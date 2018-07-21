#include <iostream>
using namespace std;
void maxminarr(int arr[][100], int m , int n,int &max, int &min)
{
	max = arr[0][0], min = arr[0][1];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n ; j++)
		{
			if (max < arr[i][j])
				max = arr[i][j];
			if (min > arr[i][j])
				min = arr[i][j];
		}
}
void main()
{
	int arr[100][100], m, n, max{ 0 }, min{0};
	cout << " nhap so dong so cot cua mang : "; cin >> m >> n;// m la chỉ số hàng n là chỉ số cột
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			system("cls");
			cout << " nhap phan tu hang " << i + 1 << " cot " << j + 1 << " la : ";
			cin >> arr[i][j];
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
	maxminarr(arr, m, n, max, min);
	cout << " gia tri lon nhat cua mang la : " << max<<"\n";
	cout << " gia tri be nhat cua mang la : " << min << "\n";
	system("pause");

}