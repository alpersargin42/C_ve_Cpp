/* Fonksiyon ilk örnek */
#include <stdio.h>
int a=5,b=3;            //global değişkenler

int topla(int sayi1, int sayi2) //lokal değişkenler
{
	int sonuc;
	sonuc=sayi1+sayi2;
	return sonuc;
	
	//return sayi1+sayi2;	
}


int main()
{
	int sayi1,sayi2, x;
	printf("1.sayiyi giriniz: ");scanf("%d",&sayi1);
	printf("2.sayiyi giriniz: ");scanf("%d",&sayi2);
	//printf("%d", topla(sayi1,sayi2));
	x=topla(sayi1,sayi2);
	printf("%d", x);
	// printf("\n%d", topla(5,8));
	return 0;
}