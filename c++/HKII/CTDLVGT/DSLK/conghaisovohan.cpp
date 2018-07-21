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
	int dem;
	NODE *ptop;
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
	s.ptop = NULL;
	
	s.dem = 0;

}
void push(stack &s, NODE *a)
{
	s.dem++;
	if (s.ptop != NULL)
	{
		a->pnext = s.ptop;
		s.ptop = a;

	}
	else
		s.ptop = a;
}
void push_queue(stack &s, NODE *a)
{
	s.dem++;
	if (s.ptop != NULL)
	{
		s.ptop->pnext = a;
	}
	else
		s.ptop = a;
}
void pop(stack &s)
{
	if (s.ptop)
	{
		NODE *x = s.ptop;
		s.ptop = s.ptop->pnext;
		s.dem--;
	}
		
}
void input(stack &s)
{
	creatstack(s);
	bool a = true;
	while (a)
	{
		int x;
		cin >> x;
		if (x != 99)
		{
			push(s, creatnode(creatdata(x)));
			s.dem++;
		}
		else
			a = false;
	}
}
stack cong(stack a, stack b)
{
	stack s;
	creatstack(s);
	while (a.ptop != NULL  || b.ptop != NULL )
	{
		if (a.ptop == NULL )
		{
			push(a, creatnode(creatdata(0)));
		}  // truong hop a it chu so hon b
		if( b.ptop == NULL)
		{
			push(b, creatnode(creatdata(0)));
		}  // nguoc lai
		if (a.ptop->item.i + b.ptop->item.i > 9)
		{
		push(s,creatnode(creatdata(a.ptop->item.i+b.ptop->item.i-10)));
				
				if (a.ptop->pnext == NULL)
				{
					push_queue(a, creatnode(creatdata(0)));
				}
				a.ptop->pnext->item.i++;
		}
		else
		{
			push(s, creatnode(creatdata(a.ptop->item.i + b.ptop->item.i)));
		}
		pop(a);
		pop(b);
	}
	return s;
}
void output(stack s)
{
	cout << "\n";
	for (NODE *i = s.ptop; i; i = i->pnext)
	{
		cout << i->item.i << "\n";
	}
	
}
int main()
{
	stack a,b;
	input(a);
	input(b);
	output(cong(a,b));
	system("pause");
}