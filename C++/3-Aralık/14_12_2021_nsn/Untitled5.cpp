//copy constructor
#include<iostream>
using namespace std;

class koordinat{
private:
    int x,y;
public:
    koordinat():x(0),y(0){}
    void input_deger()
    {
        cout<<"x ve y yi giriniz:";
        cin>>x;cin>>y;
    }
    void goster(){cout<<"x ="<<x<<" y="<<y<<endl;}
    koordinat operator+(koordinat &gecici)
    {
        /*cout<<"k1 x="<<x<<" y="<<y<<endl;
        cout<<"k2 x="<<gecici.x<<" y="<<gecici.y<<endl;*/
        koordinat temp;
        temp.x=x+gecici.x;
        temp.y=y+gecici.y;

        return temp;
    }

};


int main()
{
    koordinat k1, k2, sonuc;
    k1.input_deger();
    k1.goster();
    k2.input_deger();
    k2.goster();
    sonuc=k1+k2;
    sonuc.goster();
    return 0;
}
