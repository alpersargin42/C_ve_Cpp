//kelime ve karakter sayd�ran program
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int kelime=1, harf=0;
	char kr;
	cout<<"c�mle giriniz: ";
	//kr=getch();
	while( kr != '\r') // \r ne i�e yarar
	{
		kr=getch(); // getch / getche fark� nedir?
		cout<<kr;
		if (kr==' ')
			kelime++;
		harf++;			
	}
	harf--;
	cout<<"\nKelime sayisi= "<<kelime <<"\n harf say�s�="<<harf;
	return 0;
}
