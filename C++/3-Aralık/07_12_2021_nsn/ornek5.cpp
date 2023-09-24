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

class privateDerived: private Base{
public:
    int getprot(){return prot;}
    int getpub(){return pub;}
    int get_prvt(){return getprv();}
};

int main()
{
    privateDerived p1;/*
    cout<<p1.pub<<endl;
    cout<<p1.prot<<endl;
    cout<<p1.prv<<endl;*/
    cout<<p1.get_prvt()<<endl;
    cout<<p1.getpub()<<endl;
    cout<<p1.getprot()<<endl;
 //   cout<<p1.getprv()<<endl;
   //cout<<p1.prot<<endl;

    return 0;
}
