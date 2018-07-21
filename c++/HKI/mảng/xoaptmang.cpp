#include <iostream>
using namespace std;
void xoapttrongmang(int mang[], int k, int n)
{
	if (k <0 || k > n)
	{
		cout << "vi tri khong hop le\n";
	}
	else
	{
		cout << " da xoa \n";
		mang[k - 1] = 0;

	}
}
int main()
{
	int n;
	cout << " nhap so phan tu : "; cin >> n;
	int mang[100];
	for (int i = 0; i <= n - 1; ++i)
	{
		cout << " nhap phan tu thu " << i + 1 << " : "; cin >> mang[i];
	}
	for (int i = 0; i <= n - 1; ++i)
	{
		cout << mang[i] << " ";
	}
	int k;
	cout << " nhap(stt) cua phan tu can xoa : "; cin >> k;
	xoapttrongmang(mang, k, n);
	system("pause");
	return 0;
}
