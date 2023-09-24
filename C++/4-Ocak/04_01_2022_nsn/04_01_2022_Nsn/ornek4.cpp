//template s�n�f i�lemi

#include<iostream>
using namespace std;
template<class Tur>
class sinif{
public:
    sinif(){cout<<"char de�il"<<endl;}
};
template<>
class sinif<char>{
public:
    sinif(){cout<<"char"<<endl;}
};
/*
class sinif{
public:
    sinif(){cout<<"deneme"<<endl;}
};*/
int main()
{
  //  sinif a,b,c;

    sinif <int>a;
    sinif <float>b;
    sinif<char> c;
}

