/*
overloading nedir? 
*/

#include <iostream>
using namespace std;

class A{
	float degerA=10;
	public:
		float yaz(){return degerA;}
		A(int sayi){degerA=sayi;}
		A(float sayi1, float sayi2){degerA=sayi1*sayi2;}
		A(float a, float b, int c){
			degerA= (a*b)/c;
		}
		A(int a, int b, int c){
			degerA= a+b+c;
		}
		~A(){}
};

int main()
{
	A a1(2), a2(1.2,3.0), a3(9,4,6), a4(9.1,4.2,6); 
	cout<<"a1="<<a1.yaz()<<endl;
	cout<<"a2="<<a2.yaz()<<endl;
	cout<<"a3="<<a3.yaz()<<endl;
	cout<<"a4="<<a4.yaz()<<endl;
	return 0;
}
