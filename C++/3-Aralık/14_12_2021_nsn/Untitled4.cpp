//copy constructor
#include<iostream>
using namespace std;

class dortgen{
private:
    int yukseklik, genislik;
public:
    //dortgen(int y,int g){yukseklik=y;genislik=g;}
    dortgen(int y,int g): yukseklik(y),genislik(g){}
    int alan(){return genislik*yukseklik;}
    dortgen(dortgen &gecici)
    {
        genislik=gecici.genislik;
        yukseklik=gecici.yukseklik;
    }
};


int main()
{
    dortgen d1(3,5);
    dortgen d2 = d1;
    cout<<d1.alan()<<endl;
    cout<<d2.alan()<<endl;
    return 0;
}
