#include <iostream>
using namespace std;
double fibonacci(int n)
{
	if (n < 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n);
	system("pause");
	return 0;
}