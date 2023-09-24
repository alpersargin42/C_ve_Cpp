//Ödev 
//ayseeldem@kmu.edu.tr
//1.int a, float b, char kr
//2.int a=0, float b=0, char kr='c'
//herhngi bir deðer gönderilmediðinde ve sabit deðer 
//atanmadýðýnda(2) çalýþýrmý? araþtýrýn????
#include<iostream>
using namespace std;

void mesaj(int a, float b=0, char kr='c')
{
	cout<<a<<" - "<<b<<" - "<<kr<<endl;
}

int main()
{
	mesaj(2, 8.3, 'a');
	mesaj(2, 8.3);
	mesaj(2);
	mesaj();
	mesaj('a');
	return 0;
}
