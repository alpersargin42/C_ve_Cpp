#include <iostream>
using namespace std;

class A{
	public:
		A(){cout<<"A olu�tu"<<endl;}
		~A(){cout<<"A iptal edildi"<<endl;}
};

class B{
	public:
		B(){cout<<"B olu�tu"<<endl;}
		~B(){cout<<"B iptal edildi"<<endl;}
};
class C: public B, public A{
	public:
		C(){cout<<"C olu�tu"<<endl;}
		~C(){cout<<"C iptal edildi"<<endl;}
};
int main()
{
	C c1;
	
	return 0;
}
