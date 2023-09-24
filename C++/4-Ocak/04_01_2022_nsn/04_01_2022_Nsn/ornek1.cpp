//toplama iþlemi
#include<iostream>
using namespace std;
/*
int topla(int a,int b){  return a+b;}
float topla(float a,float b){  return a+b;}
*/
template <class Tur>
Tur topla(Tur a, Tur b){return a+b;}



int main()
{
    int sayi1=3, sayi2=5;
    cout<<topla(sayi1,sayi2)<<endl;

    float x=3.5,y=5.8;
    cout<<topla(x,y)<<endl;

}

