#include <iostream>
using namespace std;
long tinhgiatri_x_mu_n(int x, int n)
{
	int k = 1;
	for (int i = 0; i < n; i++)
	{
		k *= x;
	}
	return k;
}
class donthuc
{
	int heso;
	int somu;
public:
	donthuc()
	{
		heso = 0;
		somu = 0;
	};
	donthuc(int k, int n)
	{
		heso = k;
		somu = n;
	};
	void set_heso(int k)
	{
		heso = k;
	};
	void set_somu(int n)
	{
		somu = n;
	};
	int get_heso()
	{
		return heso;
	}
	int get_somu()
	{
		return somu;
	}
	void nhap();
	void xuat();
	~donthuc() {};
};
void donthuc::nhap()
{
	cout << "nhap he so don thuc:";
	cin >> heso;
	
}
void donthuc::xuat()
{
	cout << " don thuc duoc bieu dien theo cong thuc toan hoc la :" << heso << "x^" << somu << "\n";
}
class dathuc
{
	int n;
	donthuc a[100];
public:
	void nhap();
	void xuat();
	dathuc() { n = 0; };
	~dathuc() {};
	dathuc conghaidathuc(dathuc b)
	{
		dathuc c = *this;
		for (int j = 0; j < b.n; j++)
		{
			int k = 0;
			for (int i = 0; i < n; i++)
			{
				if (b.a[j].get_somu() == a[i].get_somu())
				{
					c.a[i].set_heso(c.a[i].get_heso() + b.a[i].get_heso());
					k++;
					break;
				}
				
			}
			if (k == 0)
			{
				c.n++;
				c.a[n] = b.a[j];
			}

		}
		return c;
	}
	dathuc truhaidathuc(dathuc b)
	{
		dathuc c = *this;
		for (int j = 0; j < b.n; j++)
		{
			int k = 0;
			for (int i = 0; i < n; i++)
			{
				if (b.a[j].get_somu() == a[i].get_somu())
				{
					c.a[i].set_heso(c.a[i].get_heso() - b.a[i].get_heso());
					k++;
					break;
				}

			}
			if (k == 0)
			{
				c.n++;
				c.a[n].set_heso( -b.a[j].get_heso());
				c.a[n].set_somu(b.a[j].get_somu());
			}

		}
		return c;
	}
	dathuc operator+(dathuc b)
	{
		return (this->conghaidathuc(b));
	}
	dathuc operator-(dathuc b)
	{
		return (this->truhaidathuc(b));
	}
	friend ostream& operator <<(ostream &os, dathuc &b);
	friend istream& operator >>(istream &is, dathuc &b);
};
ostream& operator << (ostream &os, dathuc &b)
{
	b.xuat();
	return os;
}
void dathuc::nhap() {

	cout << " nhap bac da thuc :";
	cin >> n;
	
	for (int i = n-1; i >= 0; i--)
	{
		cout << " nhap he so don thuc X^" << i << ": \n";
		a[i].nhap();
		a[i].set_somu(i);
	}
}
void dathuc::xuat()
{
	cout << " da thuc la : \n";
	cout << a[n-1].get_heso() << "x^" << a[n-1].get_somu();
	for (int i = n-2; i >= 0; i--)
	{
		if (a[i].get_heso() > 0 && a[i].get_somu() != 1 && a[i].get_somu() != 0)
		{
			cout << "+" << a[i].get_heso() << "x^" << a[i].get_somu();
		}
		else if (a[i].get_heso() > 0 && a[i].get_somu() == 1)
			{
			if (a[i].get_heso() != 1)
				cout << "+" << a[i].get_heso() << "x";
			else
				cout << "+x";
			}
		else if(a[i].get_heso() > 0 && a[i].get_somu() == 0)
		{
			cout << "+" << a[i].get_heso();
		}
		if (a[i].get_heso() < 0 && a[i].get_somu() != 1 && a[i].get_somu() != 0)
		{
			cout << a[i].get_heso() << "x^" << a[i].get_somu();
		}
		else if (a[i].get_heso() < 0 && a[i].get_somu() == 1)
		{
			if (a[i].get_heso() != -1)
				cout << a[i].get_heso() << "x";
			else
				cout << "-x";
		}
		else if(a[i].get_heso() < 0 && a[i].get_somu()==0)
		{
			cout << "+" << a[i].get_heso();
		}
		
	}
	cout << "\n";
};
int main()
{
	dathuc a;
	dathuc b;
	a.nhap();
	cout << a;
	cout << "break \n";
	b.nhap();
	cout << b;
	cout<< a + b;	
	system("pause");
	return 0;
}