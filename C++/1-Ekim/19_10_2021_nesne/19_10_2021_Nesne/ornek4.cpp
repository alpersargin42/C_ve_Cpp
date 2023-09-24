#include <iostream>
using namespace std;

void mesaj() { cout<<"Merhaba"<<endl;}
void birlestir()
{ cout<<" fonksiyon icinde fonksiyon cagirma:"<<endl;
  mesaj();
}

int main()
{
	mesaj();
	birlestir();
	return 0;
}
