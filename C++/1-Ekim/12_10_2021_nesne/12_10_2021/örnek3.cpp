/*
dýþarýdan girilen metni harf harf ekrana yazdýrýnýz
*/
#include <iostream>
using namespace std;
int main()
{
	string metin;
	int i;
	cout<<"Metni Giriniz : ";
	//cin>>metin;
	getline(cin,metin);
	//metin[0]='f';
	cout<<metin.length()<<endl;
	for(i=0;i<metin.length();i++)
		cout<<metin[i]<<endl;
	cout<<"--------------"<<endl;
	for(i=metin.length()-1;i>=0;i--)
		cout<<metin[i]<<endl;
	return 0;
}
