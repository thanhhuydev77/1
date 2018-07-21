#include <iostream>
using namespace std;
void main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int *st=arr;
	*(st + 5) = 100;
	cout << arr[5];
	for (int i = 0; i < 10; i++)
	{
		cout << " nhap phan tu thu " << i << ":"; 
		cin >> *(st + i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << *(st + i) << " ";
	}
	system("pause");

}