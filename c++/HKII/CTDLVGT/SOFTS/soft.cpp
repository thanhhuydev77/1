#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void Swap(int &a, int &b)
{
	int i = a;
	a = b;
	b = i;
}
void nhapmang(int a[], int n)
{
	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}

}
void xuatmang(int a[], int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
}
void selection_soft(int a[], int n, int(*cachxep)(int a, int b))
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (cachxep(a[i], a[j]) == 1)
				Swap(a[i], a[j]);
		}
}
void bouble_soft(int a[], int n, int(*cachxep)(int a, int b))
{
	for (int j = 0; j < n - 2; j++)
	{
		for (int i = n - 1; i > j; i--)
		{
			if (cachxep(a[i - 1], a[i]) == 1)
				Swap(a[i-1], a[i]);
		}
	}
}
void InterchangeSort(int a[], int n,int(*cachxep)(int a, int b))
{
	
	for (int i = 0; i<n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (cachxep(a[j],a[i]== 1)) 
				Swap(a[i], a[j]);
}
int sapxeptangdan(int a, int b)
{
	if (a > b)
		return 1;
	else
		return 0;
}
int sapxepgiamdan(int a, int b)
{
	if (a < b)
		return 1;
	else
		return 0;
}
int  sapxepchantanglegiam(int a, int b)
{
	if ((a % 2 == 0 && b % 2 != 0) && (a % 2 == 0 && b % 2 == 0 && a < b) && (a % 2 != 0 && b % 2 != 0 && a > b))
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	cout << " nhap so luong phan tu : ";
	cin >> n;
	int *arr = new int[n];
	int(*cachsapxep[3]) (int a, int b);
	cachsapxep[0] = sapxeptangdan;
	cachsapxep[1] = sapxepgiamdan;
	cachsapxep[2] = sapxepchantanglegiam;
	nhapmang(arr, n);
	xuatmang(arr, n);
	//clock_t start = clock();
	//selection_soft(arr, n, cachsapxep[0]);
	//selection_soft(arr, n, cachsapxep[1]);
	//selection_soft(arr, n, cachsapxep[2]);
	//cout << "\n\n" << double(clock() - start) / CLOCKS_PER_SEC;
	//xuatmang(arr, n);
	/*bouble_soft(arr,n, cachsapxep[0]);*/
	InterchangeSort(arr, n, cachsapxep[0]);
	xuatmang(arr, n);
	system("pause");
	return 0;
}