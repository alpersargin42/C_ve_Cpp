#include <stdio.h>
#include <math.h>

int main()
{
	double sayi,sonuc;
	printf("Sayıyı giriniz: ");
	scanf("%lf", &sayi);
	sonuc=fabs(sayi);  //Mutlak değer alma işlemi
	printf("Sonuc: %lf", sonuc);
	
	printf("\nSonuc log: %lf", log(sonuc));// logaritma fonksiyon
    return 0;
}