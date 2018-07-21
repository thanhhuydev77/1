#include <iostream>
using namespace std;
struct DATA
	{
		int k;
	};
struct NODE
	{
		DATA info;
		NODE *pNext;
	};
struct LIST
	{
		NODE * pHead;
		NODE *pTail;
	};
void CreatList(LIST &a)
{
	a.pHead = NULL;
	a.pTail = NULL;
}
NODE* creatNode(DATA DATA)
{
	NODE *p = new NODE; 
	if (p == NULL)
	{
		printf("\nKhong du bo nho de cap phat con tro");
		exit(1);
	}
	p->info = DATA; 
	p->pNext = NULL;
	return p; 
}
void AddHead(LIST &l, NODE *p)
{
	
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p; 
	}
	else
	{
		p->pNext = l.pHead; 
		l.pHead = p; 
	}
}
void AddTail(LIST &l, NODE *p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p; 
		l.pTail = p; 
	}
}
void input(LIST &l)
{
	
	CreatList(l);
	int n;
	cout << "\nNhap vao so luong phan tu trong danh sach: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		DATA data;
		cout << "\nNhap vao data: ";
		cin >> data.k;
		NODE *p = creatNode(data); 
		AddTail(l, p);
	}
}
void OutPut(LIST l)
{
	
	for (NODE *p = l.pHead; p != NULL; p = p->pNext)
	{
		cout << p->info.k;
	}
}
int main()
{
	LIST A;
	input(A);
	OutPut(A);
	system("pause");
}
