//kopyalama , ekleme, karşılaştırma
#include<stdio.h>
#include<string.h>
int main()
{
	char sehir1[10]="İstanbul", sehir2[10], birlestir[25];
	printf(" %s \n",   sehir1);	
	strcpy(sehir1, "Karaman");
	strcpy(sehir2, "Ankara");
	printf(" %s - %s ", sehir1,  sehir2);
	
	if (strcmp(sehir1, sehir2) ==0 )
	  printf("eşittir");
	else if (strcmp(sehir1, sehir2) > 0 )
	 printf("1.şehir harf sırasında ileride");
	else  
	 printf("1.şehir harf sırasında geride"); 
	
	strcpy(birlestir, sehir1);
	strcat(birlestir, " ");
	strcat(birlestir, sehir2);
	
	printf("\n %s , Uzunluk degeri= %d ", birlestir, strlen(birlestir));
	
	 
	return 0;
}