#include <stdio.h>
#include <string.h>

//void kopyala(char *p1, char *p2);
void kopyala(char *, char *);

int main()
{
	
	char str[100];
	
//	strcpy(str,"karaman");

	kopyala(str, "karaman");
	printf("%s", str);
	
	return 0;
	
}


void kopyala(char *p1, char *p2)
{
	int i;
	for(i=0;i<strlen(p2);i++)
		*(p1+i)=*(p2+i);
}