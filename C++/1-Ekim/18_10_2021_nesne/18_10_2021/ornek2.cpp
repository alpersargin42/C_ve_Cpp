//kelime ve karakter saydýran program
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int kelime=1, harf=0;
	char kr;
	cout<<"cümle giriniz: ";
	//kr=getch();
	while( kr != '\r') // \r ne iþe yarar
	{
		kr=getch(); // getch / getche farký nedir?
		cout<<kr;
		if (kr==' ')
			kelime++;
		harf++;			
	}
	harf--;
	cout<<"\nKelime sayisi= "<<kelime <<"\n harf sayýsý="<<harf;
	return 0;
}
