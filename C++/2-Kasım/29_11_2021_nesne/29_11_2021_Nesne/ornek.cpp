#include <iostream>
using namespace std;

class A{
	public:
		A(){cout<<"A oluþtu"<<endl;}
		~A(){cout<<"A iptal edildi"<<endl;}
};

class B{
	public:
		B(){cout<<"B oluþtu"<<endl;}
		~B(){cout<<"B iptal edildi"<<endl;}
};
class C: public B, public A{
	public:
		C(){cout<<"C oluþtu"<<endl;}
		~C(){cout<<"C iptal edildi"<<endl;}
};
int main()
{
	C c1;
	
	return 0;
}
