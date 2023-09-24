#include <iostream>
using namespace std;

class test{
	int x,y;
	public:
		test(int a=0,int b=0){x=a; y=b;	}
		test &setx(int a)
			{
			 	x=a;
				return *this;
			}
		test &sety(int b)
			{
			 	y=b;
			 	x=11;
				return *this;
			}
		void yaz(){cout<<x<<" "<<y<<endl;	
		}
};



int main()
{
	test t2;
	t2.setx(5);
	t2.sety(6);
	t2.yaz();
	t2.setx(8).sety(9).yaz(); //t2.yaz();
	/*test t1(3,5); 
	t1.yaz();
	test t3(3); t3.yaz();*/
	return 0;
}
