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

class D: virtual public B, virtual public C{
	int degerD;
	public:
		int f4(){return degerD=25;}
};

class E:  public D, virtual public C{
	int degerE;
	public:
		int f5(){return degerE=30;}
};

int main()
{
	E e1;
	cout<<e1.f4()<<endl;
	cout<<e1.f3()<<endl;
	cout<<e1.f2()<<endl;
	cout<<e1.f1()<<endl;
	cout<<e1.f5()<<endl;
	
	return 0;
}
