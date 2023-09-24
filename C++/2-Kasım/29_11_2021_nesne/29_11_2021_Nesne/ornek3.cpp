#include <iostream>
using namespace std;

class A{   //temel
	int degerA;
	public:
		int f1(){return degerA=20;}
};
class B: virtual public A{  //türetilmiş sınıf
	int degerB;
	public:
		int f2(){return degerB=10;}
};

class C: virtual public A{
	int degerC;
	public:
		int f3(){return degerC=5;}
};

class D: public B, public C{
	int degerD;
	public:
		int f4(){return degerD=25;}
};

int main()
{
	D d1;
	cout<<d1.f4()<<endl;
	cout<<d1.f3()<<endl;
	cout<<d1.f2()<<endl;
	cout<<d1.f1()<<endl;
	return 0;
}
