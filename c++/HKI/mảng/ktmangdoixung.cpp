#include <iostream>
using namespace std;
int main()
{
	int n, dem{ 0 };
	cout << " nhap so phan tu : "; cin >> n;
	int mang[100];
	for (int i = 0; i <= n-1; ++i)
	{
		cout << " nhap phan tu thu " << i + 1 << " : "; cin >> mang[i];
	}
	for (int i = 0; i <= n-1; ++i)
	{
		cout << mang[i] << " ";
	}
	for (int i = 0; i <= n / 2; ++i)
	{
		if (mang[i] != mang[n - i - 1])
			++dem;
	}
	if (dem == 0)
		cout << "do la day doi xung\n";
	else
		cout << " do la day ko doi xung\n";
	system("pause");
	return 0;
}