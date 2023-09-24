#include <iostream>
using namespace std;

class dizi{
	int x;
	public:
		dizi(int n){x=n;}
		int yaz(){return x;}	
};


int main()
{
	dizi d[5]={2,5,6,89,1};
	int i;
	dizi *p;
	p=d;
	for(i=0;i<5;i++)
		{
			cout<<p->yaz()<<endl;
			cout<<(*p).yaz()<<endl;
			p++;
		}
	return 0;
}
