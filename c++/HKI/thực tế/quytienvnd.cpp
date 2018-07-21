#include <iostream>
using namespace std;
int main()
{
	int n, sl500k{ 0 }, sl200k{ 0 }, sl100k{ 0 }, sl50k{ 0 }, sl20k{ 0 }, sl10k{ 0 }, sl5k{ 0 }, sl2k{ 0 }, sl1k(0);
	cout << " nhap so tien(dv: 1000d) : "; cin >> n;
	while (n >= 500)
	{
		n = n - 500;
		++sl500k;
	}
	while (n >= 200)
	{
		n = n - 200;
		++sl200k;
	}
	while (n >= 100)
	{
		n = n - 100;
		++sl100k;
	}while (n >= 50)
	{
		n = n - 50;
		++sl50k;
	}while (n >= 20)
	{
		n = n - 20;
		++sl20k;
	}while (n >= 10)
	{
		n = n - 10;
		++sl10k;
	}while (n >= 5)
	{
		n = n - 5;
		++sl5k;
	}while (n >= 2)
	{
		n = n - 2;
		++sl2k;
	}while (n >= 1)
	{
		n = n - 1;
		++sl1k;
	}
	if (sl500k != 0)
		cout << "gom co " << sl500k << " to 500k\n";
	if (sl200k != 0)
		cout << "gom co " << sl200k << " to 200k\n";
	if (sl100k != 0)
		cout << "gom co " << sl100k << " to 100k\n"; 
	if (sl50k != 0)
		cout << "gom co " << sl50k << " to 50k\n"; 
	if (sl20k != 0)
		cout << "gom co " << sl20k << " to 20k\n";
	if (sl10k != 0)
		cout << "gom co " << sl10k << " to 10k\n";
	if (sl5k != 0)
		cout << "gom co " << sl5k << " to 5k\n";
	if (sl2k != 0)
		cout << "gom co " << sl2k << " to 2k\n";
	if (sl1k != 0)
		cout << "gom co " << sl1k << " to 1k\n";
	if (sl500k != 0)
		cout << "gom co " << sl500k << " to 500k\n";
	system(" pause");
	return 0;
}