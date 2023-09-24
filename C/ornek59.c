#include <stdio.h>
#include <string.h>


int uzunluk(char a[100])
{
	int n=0;
	//while(a[n]!='\0')
	while(a[n])
		n++;
	return n;
}

int main()
{
	
	char s[100];
	printf("metni giriniz: ");
	gets(s);
	//scanf("%s", s);
	printf("\n %s strlen() %d",s, strlen(s));
	printf("\n uzunluk() %d ", uzunluk(s));
	
	return 0;
	
}

