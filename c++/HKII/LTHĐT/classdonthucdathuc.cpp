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
	donthuc(int k,int n) 
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
	cout << " nhap so mu do thuc :";
	cin >> somu;
}
void donthuc::xuat()
{
	cout << " don thuc duoc bieu dien theo cong thuc toan hoc la :" << heso << "x^" << somu<<"\n";
}
class dathuc
{
	int baccaonhat;
	int *arrheso = new int[15];
	int *arrsomu = new int[15];
public:
	int get_bac_cao_nhat()
	{
		return baccaonhat;
	}
	void set_bac_cao_nhat(int max)
	{
		baccaonhat = max;
	}
	int get_heso(int i)
	{
		return arrheso[i];
	}
	void set_heso(int k,int i)
	{
		arrheso[i] = k;
	}
	
	void nhap();
	void xuat();
	dathuc () {
		for (int i = 0; i <= 14; i++)
		{
			arrheso[i] = 0;
			arrsomu[i] = i;
		}
	};
	~dathuc () {};
	void conghaidathuc(dathuc b)
	{
		dathuc c;
		if (baccaonhat > b.get_bac_cao_nhat())
			c.set_bac_cao_nhat(baccaonhat);
		else
			c.set_bac_cao_nhat(b.get_bac_cao_nhat());
		for (int i = 0; i <= c.get_bac_cao_nhat(); i++)
		{
			c.set_heso(arrheso[i] + b.get_heso(i),i);
			
		}
		c.xuat();
		c.~dathuc();
	};
	dathuc truhaidathuc(dathuc b)
	{

	}
	donthuc get_don_thuc_bac(int i)
	{
		donthuc k;
		k.set_heso(arrheso[i]);
		k.set_somu(arrsomu[i]);
		return k;
	}
	dathuc set_don_thuc_bac(int k,int n)
	{
		arrheso[n] = k;
	}
	long tinhgiatri(int x)
	{
		long tong{ 0 };
		for (int i = 0; i <= baccaonhat; i++)
		{
			tong = tong + arrheso[i] * tinhgiatri_x_mu_n(x, i);
		}
		return tong;
	}
};

void dathuc::nhap() {
	
	cout << " nhap bac da thuc :";
	cin >> baccaonhat;
	for (int i = baccaonhat ; i >=0 ; i--)
	{
		cout << " nhap he so don thuc X^ " << i << ":";
		cin >> arrheso[i];
		arrsomu[i] = i ;
	}
};
void dathuc::xuat()
{
	cout << " da thuc la :"<<arrheso[baccaonhat]<<"x^"<<arrsomu[baccaonhat];
	for (int i = baccaonhat - 1 ; i >= 2; i--)
	{
		if (arrheso[i] > 0 )
		{
			cout << "+" << arrheso[i] << "x^" << arrsomu[i];
		} 
		if (arrheso[i] < 0	)
		{
			cout << arrheso[i] << "x^" << arrsomu[i];
		}
		
	}
	if (arrheso > 0 && arrsomu[1] == 1)
		cout << "+"<<arrheso[1] << "x";
	else if (arrheso < 0 && arrsomu[1] == 1)
		cout << arrheso[1] << "x";
	if (arrheso > 0 && arrsomu[0] == 0)
		cout << "+" << arrheso[1] ;
	else if (arrheso < 0 && arrsomu[0] == 0)
		cout << arrheso[1];
	cout << "\n";
};
int main()
{
	dathuc a;
	dathuc b;
	a.nhap();
	a.xuat();
	cout << "break \n";
	b.nhap();
	b.xuat();
	a.conghaidathuc(b);
	cout << a.tinhgiatri(2);
	cout << b.tinhgiatri(2);

	system("pause");
	return 0;
}