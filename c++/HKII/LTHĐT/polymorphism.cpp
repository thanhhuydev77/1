#include <iostream>
#include <string>
using namespace std;
class Nguoi
{
	string hoten;
public:
	virtual void nhap()
	{
		cout << "\nHo ten:"; getline(cin, hoten);
	}
	virtual int thuong() = 0; //phuong th?c thu?n ?o
	virtual void xuat() //phuong th?c ?o
	{
		cout << "\nHo ten:" << hoten;
	}
};
// class Sinhvien
class Sinhvien :public Nguoi
{
	float dttn;
public:
	void nhap() //dinh nghia l?i phuong th?c nh?p
	{
		Nguoi::nhap();
		cout << "\nDiem thi tn:"; cin >> dttn;
		cin.ignore();
	}
	int thuong() //??nh ngh?a l?i ph??ng th?c th??ng
	{
		return (dttn>8 ? 1 : 0);
	}
	void xuat() //dinh nghia l?i phuong th?c xu?t
	{
		cout << "\n-Sinh vien:";
		Nguoi::xuat();
		cout << "\nDiem thi tn:" << dttn << "\n";
	}
};
// class Giangvien
class Giangvien :public Nguoi
{
	int sobaibao;
public:
	void nhap()
	{
		Nguoi::nhap();
		cout << "\nSo bai bao:"; cin >> sobaibao;
		cin.ignore();
	}
	int thuong()
	{
		return (sobaibao>3 ? 1 : 0);
	}
	void xuat()
	{
		cout << "\n-Giang vien:";
		Nguoi::xuat();
		cout << "\nSo bai bao:" << sobaibao;
	}
};
// hàm main
void main()
{
	int n;
	cout << " nhap so luong ";
	cin >> n;

	Nguoi **ds = new Nguoi*[n];int chon;
	for (int i = 0; i < n; i++)
	{
		cout << "\n*Gv/Sv/Ngung (1,2):"; cin >> chon; cin.ignore();
		if (chon == 1) ds[i] = new Giangvien();
		if (chon == 2) ds[i] = new Sinhvien();
		ds[i]->nhap();
	}
	cout << "\n*Danh sach nhung nguoi duoc thuong";
	for (int i = 0; i < n; i++)
	{
		if (ds[i]->thuong())
			ds[i]->xuat();
	}
	system("pause");
}
