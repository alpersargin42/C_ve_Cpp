//hacim hesaplama
#include <iostream>
using namespace std;
#define pi 5


class kutu{
	double genislik, yukseklik, derinlik;
	public:
		void set_genislik(double g);
		void set_yukseklik(double y);
		void set_derinlik(double d);
		double hacim_hesapla();
		double alana_hesapla();
};

void kutu::set_genislik(double g){ genislik=g;}
void kutu::set_yukseklik(double y){ yukseklik=y;}
void kutu::set_derinlik(double d){derinlik=d;}
double kutu::hacim_hesapla(){
	return genislik*yukseklik*derinlik;
}
double kutu::alana_hesapla(){
	return pi*genislik*genislik;
}

int main()
{
	kutu k1;
	double d, g, y;
	cout<<"DErinlik giriniz: "; cin>>d;
	cout<<"Yükseklik giriniz: "; cin>>y;
	cout<<"GEnislik giriniz: "; cin>>g;
	
	
	k1.set_derinlik(d);
	k1.set_genislik(g);
	k1.set_yukseklik(y);
	cout<< "işlem sonucu: "<< k1.hacim_hesapla()<<endl;
	
	
	kutu k2;
	k2.set_genislik(3);
	cout<<"alan hesapla: "<<k2.alana_hesapla();
	double r;
	
	
	
	return 0;
}
