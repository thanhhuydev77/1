#include <iostream>
using namespace std;
double tongphanchan(int n)
{
	if (n == 1)
		return 0.5;
	else
		return 1.0 / (2 * n) + tongphanchan(n - 1);
}
int main()
{
	int n;
	cin >> n;
	cout << tongphanchan(n);
	system("pause");
	return 0;

}