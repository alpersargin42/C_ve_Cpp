#include <iostream>
using namespace std;

class Sayici{
	private:
		static int sayac;
	public:
		Sayici(){sayac++;}
		~Sayici(){}
		int dondur(){return sayac;}
		void artir(){sayac++;}
};

int Sayici::sayac=0;

int main()
{
	Sayici s1, s2, s3;
	cout<<s1.dondur()<<endl;
	s2.artir();
	
	cout<<s2.dondur()<<endl;
	
	return 0;
}
