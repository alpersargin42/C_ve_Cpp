#include <iostream>
using namespace std;

class test{
	int a,b;
	public:
		test(){a=10;b=10;}
		friend int kontrol(test t1);
};

int kontrol(test t1)
{
	if (t1.a==t1.b) return 1;
	else return 0;
}

int main()
{
//	test t2;
	test(t2);
	if (kontrol(t2))
		cout<<"aynı deger";
	else 
		cout<<"farklı değer";
	return 0;
}
