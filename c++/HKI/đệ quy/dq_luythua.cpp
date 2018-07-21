#include <iostream>
using namespace std;
double tong(int n)
{
	if (n == 1)
		return 1;
	else
		return 1.0 /(n) + tong(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << tong(n);
	system("pause");
	return 0;

}