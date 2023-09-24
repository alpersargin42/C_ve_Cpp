#include <iostream>
using namespace std;
int main()
{
	int sayi,i;
	cout<<"sayıyı girniz:";
	cin>>sayi;
	/*for(i=sayi;i>=0;i-=2)
		cout<<i;
	*/
	for(sayi;sayi>=0;sayi-=2)
		cout<<sayi;
		
	return 0;
}
