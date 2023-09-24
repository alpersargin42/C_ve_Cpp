#include <iostream>
using namespace std;

//constructor => (kurucu fonk)   //  destructor(yýkýcý)

class line{
	double uzunluk;
	public:
		void set_uzunluk(int u){uzunluk=u;}
		double get_uzunluk(){return uzunluk;}
		line(); //kruucu fonk.
		~line(); //yýkýcý fonk
};

line::line(){cout<<"oluþturuldu"<<endl;}
line::~line(){cout<< "iptal edildi"<<endl;}
int main()
{
	line l1;
	l1.set_uzunluk(5);
	cout<<l1.get_uzunluk()<<endl;
	line l2;
	return 0;
}
