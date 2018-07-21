#include <iostream>
using namespace std;
void sapxepmang(int arr[][100], int a, int b)
{
	int brr[100];
#pragma region truyen gia tri cho chuoi mot chieu
	int k = 0;
		for (int i = 0; i < a; i++) // luu tat ca gia tri vao mot mang mot chieu de tien hanh so sanh
		{
			for (int j = 0; j < b; j++)
			{
				brr[k] = arr[i][j];
				k++;
			}
		}
#pragma endregion 
#pragma region sap xep chuoi mot chieu
		/*for (int i = 0; i < a*b; i++)
			cout << brr[i] << "  ";*/
		for (int i = 0; i < a*b; i++)
		{
			for (int j = i; j < a*b; j++)
			{
				if (brr[i] >= brr[j])
				{
					int m = brr[i]; // hoan vi hai gia tri voi nhau
					brr[i] = brr[j];
					brr[j] = m;
				}
			}
			cout << brr[i] << "  ";
		}
#pragma endregion 
#pragma region truyen nguoc vao chuoi ban dau va sap xep theo hang
		k = 0;
		
		system("cls");
		cout << " ket qua sap xep theo hang la :\n";
		for (int i = 0; i < a; i++) 
		{
			for (int j = 0; j < b; j++)
			{
				arr[i][j] = brr[k];
				k++;
				cout << arr[i][j]<<"  ";
			}
			cout << "\n";
		}
		
		
#pragma endregion
#pragma region sap xep theo cot
		cout << "sap xep theo cot:\n";
		k = 0;
		for (int i = 0; i < a; i++)
		{
			for ( int j = 0; j< b; j++)
			{
				cout << brr[k+a*j] << "  ";
			}
			k++;
			cout << "\n";
		}
#pragma endregion 
#pragma region xep theo hinh chu z
		cout << "sap xep theo hinh chu z:\n";
		k = 0;
		for (int i = 0; i < a; i++) // chạy theo từng hàng
		{
			if (i % 2 == 0)  // hàng lẻ
			{
				for (int j = 0; j < b; j++)
				{
					cout << arr[i][j]<<"  ";
					k++;
				}
				cout << "\n";
			}
			else   // hàng chẵn
			{
				for (int j = 0; j < b; j++)
				{
					cout << arr[i][b - 1 - j]<<"  ";
				}
				cout << "\n";
			}

		}
#pragma endregion 
#pragma region sap xep theo hinh xoan oc
		k = 0;
		cout << " sap xep theo hinh xoan oc :";
		int m = (a > b) ?(m = b) :(m = a); 
		
		m = (m % 2 == 0) ? m = m : m + 1;
		cout << m/2<< " vong \n";
		for (int vong = 0; vong <=m/2 ; vong++)  // chọn số vòng xoắn
		{
			if ( k < a * b )          // ngắt khi hết chuỗi 
				for (int j = vong; j < b - vong ; j++)  // hàng trên vòng xoắn
				{
					arr[vong][j] = brr[k];
					k++;
				}
			if (k < a * b ) // ngắt khi hết chuỗi 
			for (int j = vong+1 ; j < a-vong ; j++) // hàng dọc chạy dọc xuống bên phải
			{
				arr[j][b-1-vong] = brr[k];
				k++;
			}
			if (k < a * b) // ngắt khi hết chuỗi 
			for (int j = b - 2 - vong ; j > vong -1; j--) // hàng dưới vòng xoắn
			{
				arr[a - 1 - vong][j] = brr[k];
				k++;
			}
			if (k < a * b) // ngắt khi hết chuỗi 
			for (int j= a - 2 - vong ; j > vong ; j--)  // hàng dọc chạy dọc lên bên trái 
			{
				arr[j][vong] = brr[k];
				k++;
			} 
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				cout << arr[i][j] << "  ";
			}
			cout << "\n";
		}

#pragma endregion 
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
	
	sapxepmang(arr, m, n);
	system("pause");

}