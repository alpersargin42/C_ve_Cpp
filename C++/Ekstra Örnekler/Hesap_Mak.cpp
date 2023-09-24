/*
Ad:Alper
Soyad:Sargın
Numara:201312030
Ödev_no: 2
*/
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <conio.h>
double sonuc=0.0;

using namespace std;

double toplama(double a,double b)
{
    cout<<"Toplama Sonucu:"<<a+b<<endl;
}
double karekok(double a,double b=0.0)
{
    cout<<"Karekok Sonucu:"<<sqrt(a)<<endl;
}
double cikarma(double a,double b)
{
    cout<<"Cikarma Sonucu:"<<a-b<<endl;
}
double tanj(double a,double b=0.0)
{
    cout<<"Tanjant Sonucu:"<<(sin(a)/cos(a))<<endl;
}
double bolme(double a,double b)
{
    cout<<"Bolme Sonucu:"<<a/b<<endl;
}
double carpma(double a,double b)
{
    cout<<"Carpma Sonucu:"<<a*b<<endl;
}
double cota(double a,double b=0.0)
{
    cout<<"Cotanjant Sonucu:"<<(cos(a)/sin(a))<<endl;
}
double sinus(double a,double b=0.0)
{
    cout<<"Sinus Sonucu:"<<sin(a)<<endl;
}
double cosinus(double a,double b=0.0)
{
    cout<<"Kosinus Sonucu:"<<cos(a)<<endl;
}
double logaritma(double a,double b=0.0)
{
    cout<<"Logaritma Sonucu:"<<log(a)<<endl;
}

//Hesap makinesi işlemlerini pointer fonksiyon ile çağırdım.Ve menüden girilen değere göre işlemleri yaptırdım.
double hesap_makinesi(double a,double b,int secim)
{
    double (*fonk_ptr)(double,double);
    if(secim==1)
    {
        fonk_ptr=toplama;
    }
    else if(secim==2)
    {
        fonk_ptr=cikarma;
    }
    else if (secim==3)
    {
        fonk_ptr=carpma;
    }
    else if (secim==4)
    {
        fonk_ptr=bolme;
    }
    else if (secim==5)
    {
        fonk_ptr=karekok;
    }
    else if (secim==6)
    {
        fonk_ptr=tanj;
    }
    else if (secim==7)
    {
        fonk_ptr=logaritma;
    }
    else if (secim==8)
    {
        fonk_ptr=sinus;
    }
    else if (secim==9)
    {
        fonk_ptr=cosinus;
    }
    else if (secim==10)
    {
       fonk_ptr=cota;
    }
    else if (secim==11)
    {
        exit(1);
    }
    
    else
    {
        cout<<"Yanlis secim.Cikis yapiliyor...";
    }
    sonuc=fonk_ptr(a,b);
    return sonuc;   
}

//Menüyü oluşturdum ve while döngüsüne koyarak sürekli olmasını sağladım.
int main(void)
{ 
    int secim;
    float a,b;
    while(1)
    {
    cout<<"***** MENU ***** \n";
    cout<<"[1] Toplama \n";
    cout<<"[2] Cikarma \n";
    cout<<"[3] Carpma \n";
    cout<<"[4] Bolme \n";
    cout<<"[5] Karekok \n";
    cout<<"[6] Tanjant Alma \n";
    cout<<"[7] Logaritma \n";
    cout<<"[8] Sinus Alma \n";
    cout<<"[9] Cosinus Alma \n";
    cout<<"[10] Kotanjant Alma \n";
    cout<<"[11] Cikis \n";
    cout<<"Lutfen seciminizi giriniz: ";cin>>secim;
    cout<<"Birinci sayiyi giriniz:";cin>>a;
    cout<<"\n";
    cout<<"İkinci sayiyi giriniz:";cin>>b;
    hesap_makinesi(a,b,secim);
    }
   
    return 0;
}
