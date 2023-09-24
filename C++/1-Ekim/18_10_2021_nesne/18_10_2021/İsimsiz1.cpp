//dışarıdan -1 girilene kadar sürekli sayı giriişi yapılması
#include <iostream>
using namespace std;
int main()
{
	int sayi;
	while (true)
	{
		cout<<"sayı giriniz:"; 
		cin>>sayi;
		if(sayi==-1)
			break;
	}
	return 0;
}
