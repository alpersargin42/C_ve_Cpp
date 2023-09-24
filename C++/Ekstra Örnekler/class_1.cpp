/*
Ad:Alper
Soyad:Sargın
Numara:201312030
Ödev_no: 3 
Class:1
*/
#include <iostream>
using namespace std;

class Araba
{
    private:
        string marka; 
        string model;  
        int yil;
        int hiz;
    public:
        void set_deger (string,string,int,int);
        void get_marka(){cout<<"Marka:"<<marka<<endl;}
        void get_model(){cout<<"Model:"<<model<<endl;}
        int get_yil() {return yil;}
        int get_hiz() {return hiz;}
        void oku();
        void kontrol(int);
        void hiz_kontrol(int,int);
        Araba();
        ~Araba();
};
Araba::Araba(){cout<<"Olusturuldu."<<endl;marka="NULL";model="NULL";yil=2022;} //default değer atadım.
Araba::~Araba(){cout<<"Iptal Edildi."<<endl;}
void Araba::set_deger (string ma,string mo ,int y,int h) {
  marka = ma;
  model = mo;
  yil=y;
  hiz=h;
}
void Araba::oku(){
	cout<<"Marka giriniz: "; cin>>marka;
	cout<<"Model giriniz: "; cin>>model;
    cout<<"Yil giriniz: "; cin>>yil;
    cout<<"Maks hizi giriniz: "; cin>>hiz;
}
void Araba::kontrol(int y)
{
    yil=y;
    if (y<2000)
    {
        cout<<"Arabaniz eski modeldir."<<endl;
    }
    else
    {
        cout<<"Arabaniz yeni modeldir."<<endl;
    }   
}
void Araba::hiz_kontrol(int y,int h)
{
    yil=y;
    hiz=h;
    if(yil<2000 && h>200)
    {
        cout<<"Arabaniz bu hıza ulasamaz."<<endl;
    }
    else if(h>50 && h<300)
    {
        cout<<"Araciniz standart kosullarda hiz yapmaktadir."<<endl;
    }
    else
    {
        cout<<"Aracinizin hiz degerini kontrol ediniz."<<endl;
    }
    
    
}
int main()
{
    Araba a1;
    a1.set_deger("Mercedes","C180",2012,150);
    a1.get_marka();
    a1.get_model();
    cout << "Yil: "<<a1.get_yil()<<endl;
    cout<<"Hiz: "<<a1.get_hiz()<<endl;
    a1.kontrol(a1.get_yil());
    a1.hiz_kontrol(a1.get_yil(),a1.get_hiz());
    a1.oku();
    a1.get_marka();
    a1.get_model();
    cout << "Yil: "<<a1.get_yil()<<endl;
    cout<<"Hiz: "<<a1.get_hiz()<<endl;
    a1.kontrol(a1.get_yil());
    a1.hiz_kontrol(a1.get_yil(),a1.get_hiz());
    return 0;
}
