#include <iostream>
using namespace std;

class Ornek{
	private:
		int yas;
		string ad;
		char cinsiyet;
	public: 
		void deger_Aktar(int y, string a, char c)
		{ yas=y;
		  ad=a;
		  cinsiyet=c;	
		  }
		  
		void deger_goster(){
		cout<<"Ad: "<<ad<<endl;
		cout<<"Yas: "<<yas<<endl;
		cout<<"Cinsiyet: "<<cinsiyet<<endl;
		}
};



int main()
{
	Ornek o1;
	o1.deger_Aktar(10, "ahmet", 'e');
	o1.deger_goster();
	return 0;
}
