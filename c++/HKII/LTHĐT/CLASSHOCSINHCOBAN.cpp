#include <iostream>
using namespace std;
class hocsinh
{
private:
	char mahocsinh[8];
	char tenhocsinh[30];
	float diemtoan;
	float diemvan;
public:
	void nhap()
	{
		cout << "nhap ma hoc sinh :";
		cin.getline(mahocsinh, 8);
		cout << " nhap ten hoc sinh :";
		cin.getline(tenhocsinh, 30);
		cout << " nhap diem toan :";
		cin >> diemtoan;
		cout << " nhap diem van : ";
		cin >> diemvan;
	}
	void xuat()
	{
		cout << " ma sinh vien :";
		/*for (int i = 0; i < 8; i++)*/
		{
			cout << mahocsinh;
		}
		cout << " \n ten sinh vien :";
		/*for (int i = 0; i < 30; i++)*/
		{
			cout << tenhocsinh;
		}
		cout << " \n diem toan : " << diemtoan << "\n diem van :" << diemvan<<"\n";
	}

};
int main()
{
	hocsinh a;
	a.nhap();
	a.xuat();
	system("pause");
}