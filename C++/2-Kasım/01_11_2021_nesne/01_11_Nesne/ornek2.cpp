#include <iostream>
using namespace std;
class Sayici{
	private:
		int sayac;
	public:
		Sayici():sayac(0){}
		~Sayici(){}
		void artir(){sayac++;}
		int dondur(){return sayac;}
};

int main()
{
	Sayici s1,s2;
	cout<<"s1=>"<<s1.dondur()<<endl;
	cout<<"s2=>"<<s2.dondur()<<endl;
	s1.artir();
	cout<<"s1=>"<<s1.dondur()<<endl;
	cout<<"s2=>"<<s2.dondur()<<endl;
	s2.artir();s2.artir();
	cout<<"s1=>"<<s1.dondur()<<endl;
	cout<<"s2=>"<<s2.dondur()<<endl;
	
	return 0;
}
