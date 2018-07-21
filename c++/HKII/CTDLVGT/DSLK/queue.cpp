#include <iostream>
//#include <queue>
using namespace std;
struct DATA
{
	int i;
};
struct stack
{
	int front;
	int top;
	DATA item[1000];
};
DATA creatdata(int t)
{
	DATA A;
	A.i = t;
	return A;
}
void creatstack(stack &q)
{
	q.front = 0;
	q.top = 0;
}
void push(stack &q, DATA a)
{
	if (q.top < 1000)
	{
		
		q.item[q.top] = a;
		q.top++;
		
	}
}
DATA pop(stack &q)
{
	if (q.top != q.front)
	{
		DATA x = q.item[q.front-1];
		for (int i = q.front; i < q.top; i++)
			q.item[i] = q.item[i + 1];
		q.top--;
		return x;
	}
}
void input(stack &q)
{
	int a;
	cout << " nhap so luong :";
	cin >> a;
	creatstack(q);
	for (int i = 0; i < a; i++)
	{
		int A;
		cout << " nhap phan tu thu " << i + 1 << ":";
		cin >> A;

		push(q,creatdata(A));
	}
}
void output(stack q)
{
	cout << q.front << q.top << "\n\n";
	for(int k = q.front;k < q.top;k++)
	{
		cout << q.item[k].i << "\t";
	}
}
int main()
{
	stack q;
	input(q);
	output(q);
	system("pause");
}