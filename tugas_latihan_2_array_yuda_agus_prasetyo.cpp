#include <iostream>
using namespace std;
int main()
{
	string data [6] = {"natalia" , "diggie" , "granger" , "atlas" , "silvanna" , "hanzo",};
	
	cout<<"menampilkan secara manual"<<endl;
	cout<<"data hero OP di mobile legends : "<<data [0][0]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [0][1]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [0][2]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [1][0]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [1][1]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [1][2]<<endl;
	
	cout<<"menampilkan menggunakan for"<<endl;
	for (int i = 0; i<2; i++)
	{
		for(int j = 0; j<3; j++)
		{
			cout<<"data hero OP di mobile legends["<<i<<"]["<<j<<"] = " <<data [i][j]<<endl;
		}
	
	}
	system("pause");
	return 0;
	
}
