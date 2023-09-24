//kendisine gönderilen dizinin ortalmaasýný alarak sonucu gösteren program

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
	cout<<" diðer nesne: "<<k2.ad;
	return 0;
}
