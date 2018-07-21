#include <iostream>
using namespace std;
void main()
{
	int a, b;
	cout << "nhap 2 so a va b : "; cin >> a >> b;
	int bcnn;
	for (int i = 1; i <= a*b; i++)
	{
		if (i % a == 0 && i %b == 0)
		{
			bcnn = i;
			break;
		}
	}
	cout << " co bcnn la :" << bcnn << "\n";
	system("pause");
}