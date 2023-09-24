//kendisine gönderilen dizinin ortalmaasýný alarak sonucu gösteren program

#include <iostream>
using namespace std;

class Ornek{
	private:
		int veri;
	public: 
		void deger_Aktar(int a){veri=a;	}
		void deger_goster(){cout<<"deger= "<<veri<<endl;}
};

int main()
{
	Ornek o1;
	o1.deger_Aktar(5);
	o1.deger_goster();
	//cout<<"deger= "<<o1veri<<endl;
	return 0;
}
