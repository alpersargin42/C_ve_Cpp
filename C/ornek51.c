//metinsel ifadelerle işlem yapma
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char kelime[100], *p1;
	int kr;
	
	printf("kelimeyi giriniz: "); 
	scanf("%s", kelime);
	kr=strlen(kelime)+1;
	p1=(char *)malloc(sizeof(char)* kr);
	if(p1==NULL)
		printf("bellekte yer ayrılamıyor");
	else
	{
		strcpy(p1,kelime);
		printf("\nGirilen kelime: %s", p1);
		free(p1);
	}
	return 0;
}