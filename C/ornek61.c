/*Matematik fonksiyonları */
#include <stdio.h>
#include <math.h>

int main()
{
 int sayi;
 double sonuc;
 printf("sayıyı giriniz: ");	
 scanf("%d", &sayi);
 sonuc=sqrt(sayi); // karekök
 printf("Sonuc: %0.2f",sonuc);
 
}