//kendisine g�nderilen dizinin ortalmaas�n� alarak sonucu g�steren program

#include <iostream>
using namespace std;

class kisi{
	public:
		string ad,soyad;
};

int main()
{
	kisi k1, k2;
	k1.ad="ahmet";
	k1.soyad="ak";
	cout<<" ad soyad: "<<k1.ad<<" "<<k1.soyad<<endl;
	cout<<" di�er nesne: "<<k2.ad;
	return 0;
}
