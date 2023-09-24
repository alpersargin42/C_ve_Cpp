/* Bilgisayar mühendisliğinin her bir harfinin adresini belirleme */
#include<stdio.h>
#include<string.h>

int main()
{
	char metin[]="bilgisayar muhendisligi"; 
	char a="Bilgisayar Mühendisliği";
	printf("%s",a);
	return 0;
	char *ptr;
	ptr=&metin;
	
	for(; *ptr!= '\0' ;ptr++)
	{	printf("%c - %p\n", *ptr, ptr);
	}
	
	printf("--------\n%c - %p\n", *(ptr-1), ptr-1);	
	//strlen
	return 0;
}