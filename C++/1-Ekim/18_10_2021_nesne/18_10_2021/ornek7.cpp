
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char isim[10]="Merhaba";
	char soyisim[10]="Dünya";
	char gecici[10];
	int i;
	
	strcpy(gecici, soyisim); cout<<gecici<<endl;
	strcpy(isim, gecici); cout<<isim<<endl;
	/*
	for(i=0;i<10;i++)
		isim[i]=soyisim[i];
	*/
	//cout<<isim;
return 0;
}
