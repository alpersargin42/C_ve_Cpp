#include <stdio.h>
struct ogrenci{
	int numara;
	float notu;
	char isim[50];
} kayit;

int main()
{
	FILE *fp;
	if((fp=fopen("yaz.txt","r"))==NULL)
	{
		printf("Dosya açılamadi");
		exit(0);
	}
	else
	{
		fread(&kayit, sizeof(kayit),1,fp);
		printf("Öğrencinin numarasi: %d\n",kayit.numara);
		printf("Öğrencinin notu: %f\n",kayit.notu);
		printf("Öğrencinin adi: %s\n",kayit.isim);		
		fclose(fp);
	}
	return 0;
}