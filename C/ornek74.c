#include <stdio.h>
int main()
{
	FILE *dosya;
	char *metin="bilgisayar muhendisligi";
	
	if((dosya=fopen("d:\\yaz.txt","w"))==NULL)
	{
		printf("dosya yazdirma icin acilamadi");
		getch();
	}
	else
	{ 
		while(*metin)
		{
			fputc(*metin, dosya);
			metin++;
		}
	printf("Dosyaya istediginiz veriler yazildi");	
	fclose(dosya);	
	}
	
	return 0;
}