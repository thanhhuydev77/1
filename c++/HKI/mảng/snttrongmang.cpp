#include <iostream>
using namespace std;
 void insnt(int a, int n)
 {
	 int dem{ 0 };
	 
		 for (int j = 2; j < a; j++)
		 {
			 if (a % j == 0)
				 dem++;
		 }
		 if (dem == 0)
			 cout << a<<" ";
		 dem = 0;
	 
 }
void main()
{
	int n, max{ 0 };
	cout << "nhap so phan tu trong mang : "; cin >> n;
	int arr[100];
	cout << " nhap phan tu dau tien :"; cin >> arr[0];	// lấy phần tử đầu
	max = arr[0]; // cắm cờ 
	for (int i = 1; i <= n - 1; i++)     // lấy phần tử tiếp theo
	{
		system("cls");   // xóa màn hình 
		cout << " phan tu thu " << i - 2 << " la : " << arr[i - 1]<<"\n";
		cout << " nhap phan tu thu " << i + 1 << " : "; cin >> arr[i]; 
		while (arr[i] <= arr[i - 1])
		{
			system("cls");
			cout << " phan tu thu " << i - 2 << " la : " << arr[i - 1]<<"\n";
			cout << " nhap lai phan tu thu " << i + 1 << " : "; cin >> arr[i];
		}
	}
	for (int j = 0; j <= n - 1;
		j++)
	{
		cout << arr[j] << " ";
	}
	cout << "\n cac so nguyen to trong mang la :";
	for (int m = 0; m < n; m++)
		insnt(arr[m], n);
		cout << "\n";

	system("pause");

}