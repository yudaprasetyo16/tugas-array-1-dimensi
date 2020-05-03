#include <iostream>
using namespace std;
int main()
{
	string data [6] = {"natalia" , "diggie" , "granger" , "atlas" , "silvanna" , "hanzo"};
	
	cout<<"menampilkan secara manual"<<endl;
	cout<<"data hero OP di mobile legends : "<<data [0]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [1]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [2]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [3]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [4]<<endl;
	cout<<"data hero OP di mobile legends : "<<data [5]<<endl;
	
	cout<<"menampilkan menggunakan for"<<endl;
	for (int i = 0; i<6; i++)
	{
		cout<<"data hero OP di mobile legends : "<<data [i]<<endl;
	}
	system("pause");
	return 0;
	
}
