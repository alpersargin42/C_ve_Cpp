#include <iostream>
using namespace std;

void mesaj(char m[]="bilgisayar");

//void mesaj(char m[]="bilgisayar")
void mesaj(char m[])
{
	cout<<"Mesaj: "<<m<<endl;
}

int main()
{
	mesaj();
	mesaj("deneme");
	return 0;
}
