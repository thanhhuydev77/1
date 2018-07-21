#include <iostream>
using namespace std;
void main()
{
	int a, sodao{ 0 };
	cout << " nhap a : "; cin >> a;
	while (a != 0)
	{
		sodao = sodao*10 + a % 10;
		a = a / 10;
	}
	cout << " co so dao la " << sodao << "\n";
	system("pause");
}