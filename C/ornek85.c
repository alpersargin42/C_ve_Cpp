#include <stdio.h>
int main()
{
	FILE *dosya=fopen("a.txt","w");
	if(dosya==NULL)
	{
		printf("dosya acilamadi"); exit(0);
	}
	else
	{
		fputs("bu bir dosya.", dosya);
		fseek(dosya, 3, SEEK_SET);
		fputs("elma muz", dosya);
		printf("islem tamam");
		fclose(dosya);
	}
	return 0;
}