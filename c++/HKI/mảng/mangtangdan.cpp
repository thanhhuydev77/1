#include <iostream>
using namespace std;
void main()
{
	int n, n2, max;
	cout << " nhap so n bat ky : "; cin >> n;
	max = n % 10;
	n2 = n / 10;
	if (n > 9)
	{
		while (n2 > 0)
		{
			if (n2 % 10 > max)
				max = n2 % 10;
				n2 = n2 / 10;
	
		}
		if (max == n % 10)
			cout << " la mot so tang dan tu trai sang phai \n";
		else
			cout << " la mot so khong tang dan tu trai sang phai \n";

	}
	else

		cout << " so " << n << " chi co mot chu so !\n";
	system("pause");


}