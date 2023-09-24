//dizi i�inde de�er arama
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int dizi[]={33,22,33,44,55,33,77,88};
    int i, aranan=44, sayac=0;

    //find(ba�lang��, biti�, aranan);

    int *ptr=find(dizi, dizi+8, aranan);

    cout<<"ptr="<<ptr<<" dizi="<<dizi<<endl;
    cout<<aranan<<" deger "<<ptr-dizi<<". indiste"<<endl;

    cout<<"\n"<<&dizi<<" - "<<&dizi+1<<" - "<<dizi+8<<"\n"<<endl;
    cout<<"\n"<<*(&dizi+1)-dizi<<"\n"<<endl;

    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    //  cout<< boyut<<endl;
    //count(ba�lang��, biti�, aranan)
    i=count(dizi, dizi+boyut, aranan) ;

    cout<<aranan<<" sayisindan "<<i<<" adet vard�r";

    /*for(i=0;i<8;i++)
    {
        if(dizi[i]==aranan)
            sayac++;
    }
    cout<<aranan<<" sayisindan "<<sayac<<"adet vard�r";
    */return 0;
}
