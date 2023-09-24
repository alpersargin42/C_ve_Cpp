#include <stdio.h>
int main()
{
	FILE *dosya;
	char kr;
	
	if ((dosya=fopen("d:\\yaz.txt", "r"))==NULL)
	{
		puts("Dosya acilmiyor");
		getch();
		//exit(0);
	}
	
	kr=fgetc(dosya);
	printf("dosyadan okunan karakter: %c", kr);
	fclose(dosya);


	
	return 0;
}