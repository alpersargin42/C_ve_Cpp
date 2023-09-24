#include <iostream>
using namespace std;
class Base{
public:
    int pub=3;
    int getprv(){return prv;}
private:
    int prv=2;
protected:
    int prot=1;
};

class PublicDerived: public Base{
public:
    int getprot(){return prot;}
    //int getprv1(){return prv;} yanlýþ tanýmlama
};

int main()
{
    PublicDerived p1;
    cout<<p1.getprv()<<endl;
    cout<<p1.pub<<endl;
    cout<<p1.getprot()<<endl;
   // cout<<p1.prv<<endl;
   //cout<<p1.prot<<endl;
   //cout<<p1.getprv1()<<endl;
    return 0;
}
