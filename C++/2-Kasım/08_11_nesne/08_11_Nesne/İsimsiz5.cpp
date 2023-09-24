#include <iostream>
using namespace std;

class test{
	int x,y=6;
	public:
		//void setx(int a){x=a;}
		void setx(int x)
		  {this->x=x;
		  }
		void getx(){
			//cout<<x<<endl;
			cout<<this->x<<endl;
			cout<<(*this).x;
			//cout<<this->y;
			//cout<< &this->x<<endl;
			cout<< &(*this).x<<endl;
			cout<< &(*this).y<<endl;
		}
};


int main()
{
	test t1;
	t1.setx(5);
	
	t1.getx();
	return 0;
}
