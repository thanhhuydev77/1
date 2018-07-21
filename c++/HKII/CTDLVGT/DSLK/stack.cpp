#include <iostream>
using namespace std;
struct DATA
{
	int i;
};
struct stack
{
	int top;
	DATA item[1000];
};
DATA creatdata(int k)
{
	DATA a;
	a.i = k;
	return a;
}
void creatstack(stack &s)
{
	s.top = 0;
}
void push(stack &s, DATA a)
{
	s.top++;
	s.item[s.top] = a;
}
DATA pop(stack &s)
{
	if (s.top > 0)
	{
		s.top--;
		return s.item[s.top];

	}
}
void input(stack &s)
{
	int a;
	cout << " nhap phan tu :";
	cin >> a;
	creatstack(s);
	s.top = a;
	for (int i = 0; i < a; i++)
	{
		if (s.top < 1000)
		{
			int A;
			
			cout << " nhap phan tu thu " << i + 1 << ":";
			cin >> A;
			s.item[i] = creatdata(A);
		}
	}
}
void output(stack s)
{
	stack cs = s;
	cout << "\n";
	while (cs.top > 0)
	{
		cout<<pop(cs).i << "\t";

	}
}
int main()
{
	stack a;
	input(a);
	output(a);
	system("pause");
}
