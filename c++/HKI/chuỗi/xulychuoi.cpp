#include <iostream>
#include <string>
using namespace std;
void xuatkytuinhoa(char chuoikytu[]) 
{
	for (int i = 0; i <= strlen(chuoikytu) ; i++)
	{
		if (chuoikytu[i] <= 'Z' && chuoikytu[i] >= 'A')
			cout << chuoikytu[i] << "\t";
	}
	cout << "\n";
}
void daochuoi(char chuoikytu[])
{
	for (int i = strlen(chuoikytu); i >= 0; i--)
	{
		cout << chuoikytu[i];
	}
	cout << " \n";
}
void doixenkehoathuong(char chuoikytu[])
{
	for (int i = 0; i <= strlen(chuoikytu); i++)
	{
		if (i % 2 == 0)
		{
			chuoikytu[i] = toupper(chuoikytu[i]);
			cout << chuoikytu[i];
		
		}
		else
		{
			chuoikytu[i] = tolower(chuoikytu[i]);
			cout << chuoikytu[i];
		}
	}
	cout << "\n";
}
void ktchuoidoixung(char chuoikytu[])
{
	int diemkhac = 0;
	for (int a = 0; a <= (strlen(chuoikytu)/2); a++)
	{
		if (chuoikytu[a] != chuoikytu[strlen(chuoikytu) - a - 1])
			diemkhac++;
	}
	if (diemkhac == 0)
		cout << " \n mang doi xung";
	else
		cout << " mang khong doi xung";
}
void demtansoxuathien(char chuoikytu[])
{
	int max = 0; char kytumax = 'o';
	for (char i = '0'; i <= 'z'; i++)
	{
		int dem = 0; 
		
		for (int j = 0; j <= strlen(chuoikytu); j++)
		{
			if (  i == chuoikytu[j] )
			{
				dem++;
			}
		}
		
		if (dem > 0)
			cout << i << " :" << dem << " lan\n";
		if (dem > max)
		{
			max = dem;
			kytumax = i;
		}
	}
	cout << kytumax << " : " << max << " lan ( xuat hien nhieu nhat )";
}
void xoachuoi(char chuoikytu[])
{
	char chuoixoa[100];     // tao chuoi can xoa
	cout << " nhap chuoi can xoa :";  cin.getline(chuoixoa, 100);
	for (int i = 0; i <= strlen(chuoixoa); i++)
	{
		// con thieu
	}
}

void main()
{
	char chuoikytu[100];
	cout << " nhap chuoi ky tu : " ; 
	cin.getline(chuoikytu,100);			// lấy chuỗi có dấu cách và chỉ lấy đủ số lượng yêu cầu
	puts(chuoikytu);
	xuatkytuinhoa(chuoikytu);
	daochuoi(chuoikytu);

	demtansoxuathien(chuoikytu);
	ktchuoidoixung(chuoikytu);
	system("pause");
}