//ayn� de�i�ken isminin farkl� s�n�flarda kullan�m�
// s�n�fB i�inden s�n�fA daki degerC nin i�eri�ini yazd�rabilirmiyiz? eri�ebilirmiyiz??
//cout<<b1.degerC<<endl; tan�mlamas�nda 20 de�eri ekrana geliyor. 10 yaz�labilirmi?
//sinifB nin temel s�n�f�na ait de�eri ekrana yazd�raabilirmiyiz.

#include <iostream>
using namespace std;
class sinifA{ // temel s�n�f
	public: 
		int degerA, degerC;
		sinifA();
		~sinifA(){cout<<"temel s�n�f yok edildi."<<endl;}
		int fonk(){return degerC;	}
};

sinifA::sinifA()
{
	degerA=55; degerC=10; 
	cout<< &degerC <<endl;
	cout<<"temel s�n�f olu�turuldu"<<endl;
}

class sinifB: public sinifA{ // t�retilmi� s�n�f
	public:
		int degerB, degerC;
		sinifB(){
	//	cout<<"t�retilmi� s�n�f C: "<<degerC<<endl;
		degerB=88; degerC=20; 
		cout<< &degerC <<endl;
		cout<<"t�retilmi� s�n�f olu�turuldu"<<endl;}
		~sinifB(){cout<<"t�retilmi� s�n�f yok edildi"<<endl;}	
};

int main()
{
	sinifA a1;
	cout<<a1.degerC<<endl;
	
	sinifB b1;
	cout<< b1.degerA<< endl;
	cout <<b1.degerB<<endl;	
	cout<<b1.degerC<<endl;
	
	cout<<"a s�n�f�ndaki degerC: "<<b1.fonk()<<endl;
	cout<<&(b1.degerC)<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
