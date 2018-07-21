#include <iostream>
using namespace std;
int non(int num)
{
	if ( num == 0)
		return 0;
	else
		return 1 + non(num / 10);
}
int main()
{
	int n;
	cin >>n;
	cout << non(n);
	system("pause");
	return 0;
}