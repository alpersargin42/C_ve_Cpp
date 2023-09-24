/*
Ad:Alper
Soyad:Sargın
Numara:201312030
Ödev_no: 3 
Class:3
*/
#include <iostream>

using namespace std;

class Insan
{
    private:
        string ad;
        string soyad;
        string meslek;
        double maas;
        int yas;
        string mulkiyet; //üzerinde evi arabası vs var mı ?
    public:
        void set_deger(string,string,string,double,int,string);
        void get_ad_soyad(){cout<<"Ad: "<<ad<<"Soyad: "<<soyad<<endl;}
        void get_meslek(){cout<<"Meslek: "<<meslek<<endl;}
        void get_mulkiyet(){cout<<"Mulkiyet: "<<mulkiyet<<endl;}
        double get_maas(){return maas;}
        int get_yas() {return yas;}
        void oku();
        void burs_kontrol(int);
        Insan();
        ~Insan();
};
Insan::Insan(){cout<<"Olusturuldu."<<endl;}
Insan::~Insan(){cout<<"İptal Edildi."<<endl;}
void Insan::set_deger(string a,string s,string me ,double ma,int y,string mu)
{
    ad=a;
    soyad=s;
    meslek=me;
    maas=ma;
    yas=y;
    mulkiyet=mu;
}
void Insan::burs_kontrol(int m)
{
    maas=m;
    char secim;
    if(m==0)
    {
        cout<<"Ogrenci misiniz?(E/H)"<<endl;cin>>secim;
        switch (secim)
        {
        case 'E':
            cout<<"Burs almaya aday olabilirsiniz."<<endl;
            break;
        case 'H':
            cout<<"Burs alamazsınız."<<endl;
        default:
            cout<<"Yanlis secim"<<endl;
            break;
        }
    }
}
void Insan::oku(){
	cout<<"Ad giriniz: "; cin>>ad;
	cout<<"Soyad giriniz: "; cin>>soyad;
    cout<<"Meslek giriniz: "; cin>>meslek;
    cout<<"Maas giriniz: "; cin>>maas;
    cout<<"Yas giriniz: "; cin>>yas;
    cout<<"Mulkiyet giriniz: ";cin>>mulkiyet;
}
int main()
{
    Insan i1;
    i1.oku();
    i1.get_ad_soyad();
    i1.get_meslek();
    cout<<"Maas: "<<i1.get_maas()<<endl;
    cout<<"Yas: "<<i1.get_yas()<<endl;
    i1.get_mulkiyet();
    i1.burs_kontrol(i1.get_maas());
    
    return 0;
}
