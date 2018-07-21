#include <iostream>
using namespace std;
struct DATA
{
	int i;
};
struct NODE
{
	DATA item;
	NODE *pnext;
};
struct stack
{
	NODE *phead;
	NODE *ptail;
};
DATA* creatdata(int k)
{
	DATA *a = new DATA;
	a->i = k;
	return a;
}
NODE* creatnode(DATA *a)
{
	NODE *A = new NODE;
	A->item = *a;
	A->pnext = NULL;
	return A;
}
void creatstack(stack &s)
{
	s.phead = NULL;

}
void push(stack &s, NODE *a)
{
	
	if (s.phead != NULL)
	{
		a->pnext = s.phead;
		s.phead = a;
		
	}
	else
		s.phead = a;
}
NODE* pop(stack &s)
{
	if (s.phead)
	{
		NODE *x = s.phead;
		s.phead = s.phead->pnext;
		return x;
	}
}
void input(stack &s)
{
	int a;
	cout << " nhap phan tu :";
	cin >> a;
	creatstack(s);
	for (int i = 0; i < a; i++)
	{
		int A;
		cout << " nhap phan tu thu " << i + 1 << ":";
		cin >> A;
		push(s, creatnode(creatdata(A)));
	}
}
void output(stack s)
{
	cout << "\n";
	for (NODE *i = s.phead; i; i = i->pnext)
	{
		cout << i->item.i << "\t";
	}
}
int main()
{
	stack a;
	input(a);
	output(a);
	system("pause");
}