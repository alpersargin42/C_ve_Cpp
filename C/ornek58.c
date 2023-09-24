//istenilen sayıda karakter ekleme   strncat

#include <stdio.h>
#include <string.h>

#define size 200

int main()
{
	char s1[size];
	char s2[size];
 	int kr;
	printf("ilk sehri giriniz: "); 
	gets(s1);
	printf("ikinci sehri giriniz: "); 
	gets(s2);
	printf(" %s %s \n", s1, s2);
	printf("kac karakter eklemek istersiniz: ");
	scanf("%d", &kr);
	printf("\n eklenmeden once: %s", s1);
	strncat(s1,s2,kr);
	//strcat(s1,s2);
	printf("\n eklendikten sonra: %s", s1);
	return 0;
}