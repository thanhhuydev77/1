#include <iostream>
using namespace std;
struct node
{
	int info;
	node *left, *right;
};
typedef node* tree;
node* creatnode(int x)
{
	node* a = new node;
	a->info = x;
	a->left = a->right = NULL;
	return a;
}
void creattree(tree &t)
{
	t = NULL;
}
void inserttree(tree &t, int x)
{
	node *n = creatnode(x);
	if (t == NULL)
	{
		t = n;
		return;
	}
	else
	{
		if (t->info > n->info)
		{
			inserttree(t->left, x);
		}
		else
		{
			inserttree(t->right, x);
		}
	}
}
void intput(tree &s)
{
	int n, x;
	creattree(s);
	cout << " nhap so luong node :";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		inserttree(s, x);
	}
}
void LNR(tree t)
{
	if (t != NULL)
	{
		LNR(t->left);
		cout << t->info;
		LNR(t->right);
	}
}
void demla(tree t, int &n)
{
	if (t != NULL)
	{
		demla(t->left, n);
		if (t->left == NULL && t->right == NULL)
			n++;
		demla(t->right, n);
		
	}
}
int main()
{
	tree a;
	intput(a);
	LNR(a);
	int dem = 0;
	demla(a, dem);
	cout << "\n" << dem;
	system("pause");

}