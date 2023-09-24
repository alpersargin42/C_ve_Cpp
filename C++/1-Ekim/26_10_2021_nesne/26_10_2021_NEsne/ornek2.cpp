#include <iostream>
using namespace std;

class kutu{
	int en,boy; //private
	public: 
		void set_deger(int e, int b);
		void oku();
		void yaz();
		bool kontrol();		
};

void kutu::set_deger(int e, int b){ en=e; boy=b; }
void kutu::oku(){
	cout<<"eni giriniz: "; cin>>en;
	cout<<"boyu giriniz: "; cin>>boy;
}
void kutu::yaz(){cout<<"En : "<<en<<" boy: "<< boy;}
bool kutu::kontrol(){
	/*if (en>boy) return true;
	else return false;*/
	return (en>boy);
}

int main()
{
	kutu k1,k2;
	k1.set_deger(3,5);
	k1.yaz();
	cout<<"k1 kontrol bloðu: "<<k1.kontrol()<<endl;
	k2.oku();
	k2.yaz();
	cout<<"k2 kontrol bloðu: "<<k2.kontrol()<<endl;
	
	cout<<"\n";
	
	kutu *k3=new kutu;
	k3->set_deger(5,8);
	k3->yaz();
	cout<<"k3: "<<k3->kontrol();
	//k3->oku();
	
	delete k3;	
	
	
	return 0;
}
