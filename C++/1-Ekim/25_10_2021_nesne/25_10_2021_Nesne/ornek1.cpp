//kendisine gönderilen dizinin ortalmaasýný alarak sonucu gösteren program

#include <iostream>
using namespace std;

double ortalama(int arr[], int boyut)
{
	int toplam=0;
	for(int i=0;i<boyut;i++)
		toplam=toplam+arr[i];
	cout<<"fonskyion: "<< (toplam/boyut)<<" toplam="<<toplam<<endl;
	return (toplam/boyut); 	
}


int main()
{
	int dizi[5]={5,9,10,20,50};
	double sonuc;
	int size=sizeof(dizi)/sizeof(int);
//	cout<<"boyut= "<<size;
	
	sonuc= ortalama(dizi, size); // 5= dizinin_boyutu;
	cout<<"dizinin ortlamasý= "<<sonuc;

	return 0;
}
