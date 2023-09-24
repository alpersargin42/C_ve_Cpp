/*
Ad:Alper
Soyad:Sargın
Numara:201312030
Ödev_no: 3 
Class:2
*/
#include <iostream>
using namespace std;

class Kopek 
{
    private:
        string cinsi;
        string model;// Evcil mi Vahşi mi?
        int yas; 
        char asi;
    public:
        void set_deger (string,string,int,char);
        void get_cinsi(){cout<<"Cinsi:"<<cinsi<<endl;}
        void get_model(){cout<<"Evcil/Vahsi:"<<model<<endl;}
        int get_yas() {return yas;}
        bool get_asi()
        {
            if(asi=='E')
                return true;
            else if(asi=='H')
                return false; 
        }
        void kuduz_kontrol(int);
        void oku();
        Kopek();
        ~Kopek();
};
Kopek::Kopek(){
    cout<<"Olusturuldu."<<endl;
}
Kopek::~Kopek()
{
    cout<<"Iptal Edildi."<<endl;
}
void Kopek::set_deger(string c,string m,int y,char a)
{
    cinsi=c;
    model=m;
    yas=y;
    asi=a;
}
void Kopek::oku(){
	cout<<"Cinsi giriniz: "; cin>>cinsi;
	cout<<"Evcil/Vahsi giriniz: "; cin>>model;
    cout<<"Yas giriniz: "; cin>>yas;
    cout<<"Asili midir?(E/H)";cin>>asi;
}

void Kopek::kuduz_kontrol(int a)
{
    asi=a;
    if(a==true)
    {
        cout<<"Kuduz degildir."<<endl;
    }
    else if(a==false)
    {
        cout<<"Kuduz olma ihtimali vardir."<<endl;
    }
}
int main()
{
    Kopek k1;
    k1.oku();
    k1.get_cinsi();
    k1.get_model();
    cout<<"Yas: "<<k1.get_yas()<<endl;
    cout<<"Asi durumu: "<<k1.get_asi()<<endl;
    k1.kuduz_kontrol(k1.get_asi());
    return 0;
}
