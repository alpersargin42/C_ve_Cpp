//template sýnýf iþlemi

#include<iostream>
using namespace std;

template<class Tur>
class sayi{
public:
    Tur a,b;
    sayi(Tur d1,Tur d2){
    //a=d1;b=d2;
    this->a=d1;
    (*this).b=d2;
    }
    Tur topla()
    //{return this->a+this->b;}

};
template<class Tur>
Tur sayi<Tur>::topla()
{return this->a+this->b;}

/*class sayi{
public:
    int a,b;
    sayi(int d1,int d2){
    //a=d1;b=d2;
    this->a=d1;
    (*this).b=d2;
    }
    int topla();
};

sayi::topla()
{return this->a+this->b;}
*/
int main()
{
    //sayi s1(3,5);
    sayi<int>s1(3,5);
    sayi<double>s2(1.4,2.5);

    cout<<s1.topla()<<endl;
    cout<<s2.topla()<<endl;
}

