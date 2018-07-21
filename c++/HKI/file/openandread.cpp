#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	typedef int* ponterint;
	ponterint as = new int; 
	ponterint m = new int(0);
	
	ifstream file("C:\\Users\\thanh\\Google Drive\\c++\\HKI\\file\\daa.txt");
	ifstream file2("C:\\Users\\thanh\\Google Drive\\c++\\HKI\\file\\daa.txt");
	if (!file)
		{
			cout << "Khong mo duoc file." << endl;
			return ;
		}else
		cout << " mo thanh cong";
		while (!file.eof())
		{
			file >> *as;
			*m++;
		}
		file.close();
		
		int *arr = new int[*m];
		for (int i = 0; i < 7; i++)
		{
			file2 >> arr[i];
			cout <<"\t"<< arr[i];
		}
		delete[] arr,as,m;
	system("pause");

}