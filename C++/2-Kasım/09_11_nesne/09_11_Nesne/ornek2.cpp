#include <iostream>
using namespace std;

class A{
	int deger;
	public:
		int d1(){return deger=18;}
};

class B:public A{ //türetme
	int x;
	public:
		int d2(){return x=22;}
		int d3(){
			x=d1();
			return x;
		}
};

int main()
{
	A a1;
	B b1;
	cout<<"a1: "<<a1.d1()<<endl;
	cout<<"b1: "<<b1.d2()<<endl;
	cout<<"a1=> "<<b1.d1()<<endl;
	cout<<"d3=> "<<b1.d3()<<endl;
	
	return 0;
}
