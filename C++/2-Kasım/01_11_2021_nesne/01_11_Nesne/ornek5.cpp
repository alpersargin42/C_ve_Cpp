#include <iostream>
using namespace std;
class dene{
	int no;
	public:
		dene(int n=0):no(n){} //no=n;
		friend void yaz(dene &);
};

void yaz(dene &x)
{
	cout<<x.no<<endl;
}
int main()
{
	dene d1(15), d2(2);
	yaz(d1);
	yaz(d2);
	return 0;
}
