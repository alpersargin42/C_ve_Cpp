#include <iostream>
#include <cstring>
using namespace std;
class metin{
	enum{size=80};
	char ad[size];
	public:
		metin(){ad[0]='\0';}
		metin(char a[]) {strcpy(ad,a);}
		void yaz(){cout<<ad<<endl;}
		void birlestir(metin m4)
		{	if (strlen(ad)+strlen(m4.ad)<size)
				strcat(ad, m4.ad);
			else 
				cout<<"girilen kelime uzun";	
		}
		~metin(){}
};
int main()
{
	metin m1;
	metin m2("bilgisayar");
	cout<<"m1";m1.yaz();
	cout<<"m2"; m2.yaz();
	char d[80];
	cin>>d;
	metin m3(d);
	cout<<"m3"; m3.yaz();
	m2.birlestir(m3);
	cout<<"m2"; m2.yaz();
	
	return 0;
}
